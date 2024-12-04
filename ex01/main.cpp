#include "Span.hpp"

#define GREEN "\033[32m"
#define RED "\033[31m"
#define YELLOW "\033[33m"
#define CYAN "\033[36m"
#define MAGENTA "\033[35m"
#define BLUE "\033[34m"
#define RESET "\033[0m"

int main()
{
	bool run = true;
	std::string input;
	int value;
	std::cout << YELLOW << "Add the Structure Number of Elements : ";
	std::getline(std::cin, input);
	value = std::atoi(input.c_str());
	Span vector(value);
	try
	{
		while (run)
		{

			std::cout << "Select an option  to perfom and acction : \n"
					  << GREEN "Option 1. Create a vector with the number of elements \n"
					   "Option 2. Add a number to the vector \n"
					   "Option 3. Print the vector \n"
					   "Option 4. get the shortest span \n"
					   "Option 5. get the longest span \n"
					   "Option 6. Exit \n"
					  << RESET << std::endl;
					   std::cout << "Option : " ;

			std::getline(std::cin, input);
			value = std::atoi(input.c_str());
			switch (value)
			{
			case 1:
				std::cout << YELLOW << "______Create a vector Number of Elements : ";
				std::getline(std::cin, input);
				value = std::atoi(input.c_str());
				vector.vectorGenerator(value);
				break;
			case 2:
				std::cout << CYAN << "Add the number to the vector : ";
				std::getline(std::cin, input);
				value = std::atoi(input.c_str());
				vector.addNumber(value);
				break;
			case 3:
				vector.printVector();
				break;
			case 4:
				std::cout << BLUE << "The shortest span is : " << RESET << vector.shortestSpan() << std::endl;
				break;
			case 5:
				std::cout << MAGENTA << "The longest span is : " << RESET << vector.longestSpan() << std::endl;
				break;
			case 6:
				run = false;
				break;
			default:
				break;
			}
		}
	}
	catch (std::exception &e)
	{
		std::cout << RED << "Error : " << e.what() << std::endl;
	}
	std::cout << GREEN << "\n🫨  Bye 👋 👋\n" << std::endl;
	return (0);
}
