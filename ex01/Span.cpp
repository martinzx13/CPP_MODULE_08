#include "Span.hpp"
#define CYAN "\033[36m"
#define RESET "\033[0m"

Span::Span() : _count(0)
{
	std::cout << "Default constructor called " << std::endl;
}
Span::Span(unsigned int _num) : _count(0), _N(_num)
{
    std::cout << "Parametric constructor called " << std::endl;
}

Span::Span(const Span &_src) : _count(0), _N(_src._N), _vector(_src._vector)
{
	std::cout << "Copy constructor called " << std::endl;
}

Span &Span::operator=(const Span &_src)
{
	if (this != &_src)
	{
		_N = _src._N;
		_vector = _src._vector;
	}
	return (*this);
}

int Span::shortestSpan() const
{
    _vector.empty() ? throw(std::runtime_error("Not Arguments")) : 0;
	std::vector<int>::const_iterator it = std::min_element(_vector.begin(), _vector.end());
	std::cout << "The minimum is : " << *it <<  std::endl;
    return (*it);
}

int Span::longestSpan() const
{
    _vector.empty() ? throw(std::runtime_error("Not Arguments")) : 0;
	std::vector<int>::const_iterator it = std::max_element(_vector.begin(), _vector.end());
	std::cout << "The maximum is : " << *it << std::endl;
    return (*it);
}

void Span::addNumber(const int &_val)
{
	_count++;
	if (_count <= _N)
		_vector.push_back(_val);
	else
		throw(myException());
}

void Span::vectorGenerator( int &_values)
{
    while (_values > 0)
        addNumber(_values--);
}

void Span::printVector(){
    for(std::vector<int>::iterator it  =  _vector.begin(); it != _vector.end(); it++)
        std::cout<< CYAN <<"Value Vectors : " << RESET << *it << " \n";
}