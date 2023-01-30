#include <iostream>
using namespace std;
int greatestCommonDivisor(int number1, int number2);
int leastCommonDivisor(int number1, int number2,int gcd);

main()
{
  int number1;
  int number2;
  cout << "Enter the number 1 : ";
  cin >> number1;
  cout << "Enter the number 2 : ";
  cin >> number2;
  int result1 = greatestCommonDivisor(number1,number2);
  cout<<"The greatest common divisor is "<<result1<<endl;
  int result2 = leastCommonDivisor(number1,number2,result1);
  cout<<"The least common duivisor are "<<result2<<endl;
}
int greatestCommonDivisor(int number1, int number2)
{
  int remainder1;
  int remainder2;
  int gcd;

  for (int x = 1; x <= number1; x++)
  {
    remainder1 = number1 % x;
    remainder2 = number2 % x;
    if (remainder1 == 0 && remainder2 == 0)
    {
      gcd = x;
      
    }
    return gcd;
  }
}
int leastCommonDivisor(int number1, int number2,int gcd)
{
  int lcm;

  lcm = (number1* number2) / gcd;
  return lcm;
}
