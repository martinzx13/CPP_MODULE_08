#pragma once

#include <iostream>
#include <algorithm>
#include <vector>

class Span
{
public:
	Span();
	Span(const Span &_src);
	Span &operator=(const Span &_src);
	Span(unsigned int _numb);
	void addNumber(const int &_val);
	~Span() {};
	class myException : public std::exception
	{
		virtual const char *what() const throw()
		{
			return ("Error: Vector Full");
		}
	};
	int shortestSpan() const;
	int longestSpan() const;
	void vectorGenerator(int &_values);
	void printVector();

private:
	unsigned int _count;
	unsigned int _N;
	std::vector<int> _vector;
};
