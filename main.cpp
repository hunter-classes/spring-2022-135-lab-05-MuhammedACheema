#include <iostream>
#include "funcs.h"

int main()
{
  std::cout << "Task A: " << isDivisibleBy(100, 25) << "\n";
  std::cout << "Task B: " << isPrime(11) << "\n";
  std::cout << "Task C: " << nextPrime(16) << "\n";
  std::cout << "Task D: " << countPrimes(10, 60) << "\n";
  std::cout << "Task E: " << isTwinPrime(7) << "\n";
  std::cout << "Task F: " << nextTwinPrime(5) << "\n";
  std::cout << "Task G: " << largestTwinPrime(5, 18) << "\n";
  return 0;
}
