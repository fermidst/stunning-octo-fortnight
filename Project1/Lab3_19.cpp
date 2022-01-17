#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void lab3_1()
{
  auto split = [](const std::string& input)
  {
    std::vector<std::string> result;
    const std::string delimiter = " ";
    auto start = 0U;
    auto end = input.find(delimiter);
    while (end != std::string::npos)
    {
      result.push_back(input.substr(start, end - start));
      start = end + delimiter.length();
      end = input.find(delimiter, start);
    }

    result.push_back(input.substr(start, end));
    return result;
  };
  std::string sentence;
  std::cout << "enter sentence\n";
  std::getline(std::cin, sentence);
  const auto tokens = split(sentence);
  int count = 0;
  std::cout << "tokens where front == back\n";
  for (const std::string& token : tokens)
  {
    if (token.front() == token.back())
    {
      std::cout << token << '\n';
      ++count;
    }
  }
}
void lab3_2()
{
  auto get_n = []
  {
    std::cout << "enter int n, where n <= 10\n";
    int n;
    std::cin >> n;
    if (n > 10)
    {
      std::cout << "n is out of range";
      throw std::out_of_range("n");
    }
    return n;
  };

  const int n = get_n();
  std::vector<int> numbers(n);
  for (int i = 0; i < n; ++i)
  {
    std::cin >> numbers.at(i);
  }
  std::sort(numbers.begin(), numbers.end(), std::greater<>());

}

void lab3_3()
{
  auto is_vowel = [](char letter)
  {
    return static_cast<bool>(0x208222 >> (letter & 0x1f) & 1);
  };
  std::string input;
  std::cout << "enter input\n";
  std::getline(std::cin, input);
  for (char& c : input)
  {
    if (is_vowel(c))
    {
      c = std::toupper(c);
    }
  }
  std::cout << input;
}

void lab3_4()
{
  
}