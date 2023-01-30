#include <iostream>
using namespace std;
void display(int value);

main()
{
  int number1 = 0;
  int number2 = 1;
  int value;
  cout<<"Enter the length of fibonachii series : ";
  cin>>value;
  cout<<"The series is "<<number1<<" "<< number2<<" ";
  display(value);
}
void display(int value)
{
  int number1 = 0;
  int number2 = 1;
  int sum = 0;
  for(int x = 1;x <= value-2;x++)
  {
    sum = number1+number2;
    number1 = number2;
    number2 = sum;
    cout<<sum<<" ";
  } 
}