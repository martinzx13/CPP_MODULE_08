#include "easyfind.hpp"
#include <vector>
#include <list>
#include <map>

int main()
{
	std::cout << YELLOW << "Testing with vector and list" << RESET << std::endl;

	std::cout << GREEN << "_______________ VECTOR _______________" << RESET << std::endl;

	std::vector<int> _vector;
	try
	{
		_vector.push_back(1);
		_vector.push_back(2);
		_vector.push_back(3);
		_vector.push_back(4);
		_vector.push_back(5);
		easyfind(_vector, 1);
		easyfind(_vector, 4);
	}
	catch (const myException &e)
	{
		std::cout << RED << e.what() << std::endl;
	}

	std::cout << GREEN << "_______________ LIST _______________" << RESET << std::endl;

	std::list<int> lista;
	try
	{
		lista.push_back(1);
		lista.push_back(2);
		lista.push_back(3);
		lista.push_back(4);
		lista.push_back(5);
		easyfind(lista, 1);
		easyfind(lista, 4);
		easyfind(lista, 6);
	}
	catch (const myException &e)
	{
		std::cout << RED << e.what() << std::endl;
	}

}
