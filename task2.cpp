#include <iostream>
using namespace std;
int digits(int number);

main()
{
  int number;
  cout<<"Enter the number : ";
  cin>>number;
int result = digits(number);
cout<<result;
}
int digits(int number)
{
  int counter = 0;
   
   while(number != 0)
   {
      number = number/10;
      counter = counter + 1;
     
   }
   return counter;
}