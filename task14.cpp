#include <iostream>
using namespace std;
float calculateMoney(int age, float price, int price2);
main()
{
  int age;
  float price;
  int price2;
  cout << "Enter the age of Lilly's (1-77): ";
  cin >> age;
  cout << "Enter the price of washing machine (1-10,000) : ";
  cin >> price;
  cout << "Enter the unit price of each toy : ";
  cin >> price2;
  float result = calculateMoney(age, price, price2);
   if (result > price)
  {
    result = result - price;
    cout << "Yes!"<<result;
  }
  else
  {
    result = price - result;
    cout<<"No!"<<result;
  }
}
float calculateMoney(int age, float price, int price2)
{
  int answer;
  int counter1 = 0;
  int counter2 = 0;
  int sum = 0;
  int result = 0;
  int value;
  float totalSavedMoney;
  for (int birth = 1; birth <= age; birth++)
  {
    answer = birth;

    if (answer % 2 == 0)
    {
      counter1 = counter1 + 1;
      value = counter1 * 10;
      result = value + result;
    }
    else
    {
      counter2 = counter2 + 1;
    }
  }

  int steal = counter1;
  result = result - steal;
  int toy = counter2 * price2;
  totalSavedMoney = toy + result;
  return totalSavedMoney;
 
}
