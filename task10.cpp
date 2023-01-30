#include <iostream>
using namespace std;

main()
{
  int number;
  int sum = 0;
  for (int number = 1; number <= 100; number++)
  {
    sum = sum + number;
  }
  cout << sum;
}