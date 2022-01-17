#include <iostream>

void lab2_1()
{
  int n = 0;
  std::cout << "enter int n\n";
  std::cin >> n;

  int count = 0;
  for (int i = 0; i < n; ++i)
  {
    int a;
    std::cin >> a;
    if (a % 3 == 0 && a % 5 != 0)
    {
      ++count;
    }
  }
  std::cout << "count: " << count << '\n';
}

void lab2_2()
{
  int n = 0;
  std::cout << "enter int n\n";
  std::cin >> n;

  int sumOfNegative = 0;
  int countOfPositive = 0;
  for (int i = 0; i < n; ++i)
  {
    int a;
    std::cin >> a;
    if (a < 0)
    {
      sumOfNegative += a;
    }
    if (a > 0)
    {
      ++countOfPositive;
    }
  }
  std::cout << "sumOfNegative = " << sumOfNegative << ", countOfPositive = " << countOfPositive << '\n';
}