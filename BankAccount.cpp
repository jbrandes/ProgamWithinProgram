#include <iostream>

using namespace std;


int
main ()
{
  int original, deposit, withdrawl, total;

  cout << "What is your original balance?";
  std::cin >> original;
  std::cout << "Would you like to make a deposit?" << std::endl;
  std::cin >> deposit;
  std::cout << "Would you like to make a withdrawl?" << std::endl;
  std::cin >> withdrawl;

  total = (original + deposit - withdrawl);

  std::cout << "Your new balance is: " << total << std::endl;

  return 0;


}
