#pragma once

#include <iostream>
#include <algorithm>

#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"

class myException : public std::exception
{
private:
	std::string _msg;

public:
	explicit myException(std::string msg) : _msg(msg) {}
	virtual const char *what() const throw()
	{
		return _msg.c_str();
	}
	virtual ~myException() throw() {}
};

template <typename T>

void easyfind(const T &_container, const int &_value)
{
	typename T::const_iterator it = std::find(_container.begin(), _container.end(), _value);
	if (it == _container.end())
		throw myException("Value not found");
	else
		std::cout << GREEN << "Value found : " << RESET << std::endl;
}

template <typename K, typename V>
void easyfind(const std::map<K, V> &_container, const K &_key)
{
	typename std::map<K, V>::const_iterator it = _container.find(_key);
	if (it == _container.end())
		throw myException("Value not found");
	else
		std::cout << "Value found: " << it->second << std::endl;
}
