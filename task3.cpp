#include <iostream>
using namespace std;
int frequencyChecker(int number,int digit);

main()
{
  int number;
  int digit;
  cout<<"Enter the number : ";
  cin>>number;
  cout<<"Enter the digit : ";
  cin>>digit;
  int result = frequencyChecker(number,digit);
  cout<<result;

}
int frequencyChecker(int number,int digit)
{
  int counter = 0;
   
   while(number != 0)
   {
      int value = number%10;
      number = number/10;
      if(value == digit)
      {
      counter = counter + 1;
      }
     
   }
   return counter;
}