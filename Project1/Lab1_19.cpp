#include <iostream>
#include <cmath>

void lab1_1()
{
  auto get_x = []
  {
    std::cout << "enter argument for y = ln(x), where 0 < x <= 2\n";
    double x;
    std::cin >> x;
    if (x <= 0 || x > 2)
    {
      std::cout << "arg is out of range";
      throw std::out_of_range("arg");
    }
    return x;
  };

  const auto x = get_x();
  double y = 0.0;
  double a = x;
  int n = 1;

  while (std::fabs(a) >= 1e-4)
  {
    a = std::pow(x - 1, n) / n;
    y += a * std::pow(-1, n) * -1;
    n++;
  }

  std::cout << "ln(x) = " << y << ", std::log(x) = " << std::log(x) << '\n';
}

void lab1_2()
{
  int n = 0;
  std::cout << "enter int n\n";
  std::cin >> n;

  int sum = 0;
  for (int i = 0; i < n; i++)
  {
    sum += std::pow(2, i);
  }
  const int sum1 = std::pow(2, n) - 1;
  std::cout << "sum = " << sum << ", sum1 = " << sum1 << '\n';
  if (sum == sum1)
  {
    std::cout << "true\n";
  }
  else
  {
    std::cout << "false\n";
  }
}


template <class T>
int numDigits(T number)
{
  int digits = 0;
  if (number < 0) digits = 1; // remove this line if '-' counts as a digit
  while (number) {
    number /= 10;
    digits++;
  }
  return digits;
}
void lab1_3()
{
  int n = 0;
  std::cout << "enter int n\n";
  std::cin >> n;
  std::cout << numDigits(n);
}