#include "MutantStack.hpp"
#include <cassert>
#include <iostream>

// ANSI color codes
#define RESET "\033[0m"
#define GREEN "\033[32m"
#define RED "\033[31m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"

void testMutantStack() {
  std::cout << GREEN << "___________ 🐾 Mutant Stack Creation 🐾 ___________\n"
            << RESET << std::endl;

  MutantStack<int> mutant;

  // Test: Push and Top
  std::cout << YELLOW << "➡️  Testing push() and top()...\n" << RESET << std::endl;
  for (int i = 0; i < 10; ++i) {
    mutant.push(i);
    std::cout << BLUE << "  ✔️  Pushed: " << i << RESET << std::endl;
  }
  assert(mutant.top() == 9);
  std::cout << GREEN << "\n  ✅ Top element is correct (9)." << RESET
            << std::endl;

  // Test: Iterators
  std::cout << YELLOW << "\n➡️  Testing iterators..." << RESET << std::endl;
  MutantStack<int>::iterator it = mutant.begin();
  MutantStack<int>::iterator itEnd = mutant.end();
  int expectedValue = 0;
  while (it != itEnd) {
    std::cout << BLUE << "  ✔️  Iterator points to: " << *it << RESET
              << std::endl;
    assert(*it == expectedValue);
    ++it;
    ++expectedValue;
  }
  std::cout << GREEN << "  ✅ Forward iteration passed.\n" << RESET << std::endl;

  // Test: Const Iterators
  std::cout << YELLOW << "➡️  Testing const iterators..." << RESET << std::endl;
  MutantStack<int>::const_iterator cit = mutant.begin();
  MutantStack<int>::const_iterator citEnd = mutant.end();
  expectedValue = 0;
  while (cit != citEnd) {
    std::cout << BLUE << "  ✔️  Const iterator points to: " << *cit << RESET
              << std::endl;
    assert(*cit == expectedValue);
    ++cit;
    ++expectedValue;
  }
  std::cout << GREEN << "  ✅ Const forward iteration passed.\n" << RESET
            << std::endl;

  // Test: Reverse Iterators
  std::cout << YELLOW << "➡️  Testing reverse iterators..." << RESET
            << std::endl;
  MutantStack<int>::reverse_iterator rit = mutant.beginReverse();
  MutantStack<int>::reverse_iterator ritEnd = mutant.endReverse();
  expectedValue = 9;
  while (rit != ritEnd) {
    std::cout << BLUE << "  ✔️  Reverse iterator points to: " << *rit << RESET
              << std::endl;
    assert(*rit == expectedValue);
    ++rit;
    --expectedValue;
  }
  std::cout << GREEN << "  ✅ Reverse iteration passed.\n" << RESET << std::endl;

  // Test: Const Reverse Iterators
  std::cout << YELLOW << "➡️  Testing const reverse iterators..." << RESET
            << std::endl;
  MutantStack<int>::const_reverse_iterator crit = mutant.beginReverse();
  MutantStack<int>::const_reverse_iterator critEnd = mutant.endReverse();
  expectedValue = 9;
  while (crit != critEnd) {
    std::cout << BLUE << "  ✔️  Const reverse iterator points to: " << *crit
              << RESET << std::endl;
    assert(*crit == expectedValue);
    ++crit;
    --expectedValue;
  }
  std::cout << GREEN << "  ✅ Const reverse iteration passed.\n" << RESET
            << std::endl;

  // Test Passed
  std::cout << GREEN << "🎉 All tests passed! 🎉" << RESET << std::endl;
}

int main() {
  testMutantStack();
  return 0;
}
