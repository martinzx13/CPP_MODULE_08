#pragma once

#include <algorithm>
#include <iostream>
#include <stdexcept>

#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"

template <typename T>

void easyfind(const T &_container, const int &_value) {
  if (_container.empty())
    throw(std::runtime_error("Empty container"));
  typename T::const_iterator it =
      std::find(_container.begin(), _container.end(), _value);
  if (it == _container.end())
    throw(std::runtime_error("Value not found"));
  else
    std::cout << GREEN << "Value found : " << *it << RESET << std::endl;
}
