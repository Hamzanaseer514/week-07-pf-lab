#include <iostream>
using namespace std;
void printPercentage(int number1);

main()
{
  int number1;
  cout << "Enter total numbers : ";
  cin >> number1;
  printPercentage(number1);
}
void printPercentage(int number1)
{
  float p1 = 0;
  float p2 = 0;
  float p3 = 0;
  float p4 = 0;
  float p5 = 0;
  int number;

  for (int x = 1; x <= number1; x++)
  {
    cout << "Enter a number : ";
    cin >> number;

    if (number < 200)
    {
      p1 = p1 + 1;
    }
    if (number >= 200 && number <= 399)
    {
      p2 = p2 + 1;
    }
    if (number >= 400 && number <= 599)
    {
      p3 = p3 + 1;
    }
    if (number >= 600 && number <= 799)
    {
      p4 = p4 + 1;
    }
    if (number >= 800)
    {
      p5 = p5 + 1;
    }
  }
  p1 = (p1 * 100) / number1;

  p2 = (p2 * 100) / number1;
  p3 = (p3 * 100) / number1;
  p4 = (p4 * 100) / number1;
  p5 = (p5 * 100) / number1;
  cout << p1 << endl;
  cout << p2 << endl;
  cout << p3 << endl;
  cout << p4 << endl;
  cout << p5 << endl;
}