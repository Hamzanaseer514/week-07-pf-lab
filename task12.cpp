#include <iostream>
using namespace std;
int calculateGCD(int number1, int number2);
int calculateLCM(int number1, int number2, int gcd);

main()
{
  int number1;
  int number2;
  cout << "Enter the number 1 : ";
  cin >> number1;
  cout << "Enter the number 2 : ";
  cin >> number2;
  int result1 = calculateGCD(number1, number2);
  int result2 = calculateLCM(number1, number2, result1);
  cout <<"The greatest common divisor is : "<< result1 << endl;
  cout << "The least common divisor is : "<< result2 <<endl;
}
int calculateGCD(int number1, int number2)
{
  int gcd;
  for (int x = 1; x <= number2; x++)
  {
    int remainder1 = number1 % x;
    int remainder2 = number2 % x;
    if (remainder1 == 0 && remainder2 == 0)
    {
      gcd = x;
    }
  }
  return gcd;
}
int calculateLCM(int number1, int number2, int gcd)
{
  int lcm = (number1 * number2) / gcd;
  return lcm;
}