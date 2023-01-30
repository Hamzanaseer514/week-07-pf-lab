#include <iostream>
using namespace std;
int digitSum(int number);

main()
{
 int number;
 cout<<"Enter the number : ";
 cin>>number; 
 int answer = digitSum(number);
 cout<<"The sum is : "<<answer;
}
int digitSum(int number)
{
 int sum = 0;
 while(number != 0)
 {
  int digit  = number%10;
  int result = digit;
  number = number/10;
  sum = sum + result;
 }
 return sum;
}