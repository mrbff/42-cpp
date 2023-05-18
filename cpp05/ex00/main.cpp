#include "Bureaucrat.hpp"
#include <iostream>

int main ()
{

	try
	{
		Bureaucrat	bill = Bureaucrat("bill", 1);
		std::cout << bill << std::endl;
		bill.demote(1);
		std::cout << bill << std::endl;
		bill.promote(1);
		std::cout << bill << std::endl;
		bill.promote(1);
		std::cout << bill << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;


	try
	{
		Bureaucrat		dick = Bureaucrat("dick", 150);
		std::cout << dick << std::endl;
		dick.promote(1);
		std::cout << dick << std::endl;
		dick.demote(1);
		std::cout << dick << std::endl;
		dick.demote(1);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;


	try
	{
		Bureaucrat		karen = Bureaucrat("karen", 0);
		std::cout << karen << std::endl;
		karen.demote(1);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;


	try
	{
		Bureaucrat		jeremy = Bureaucrat("jeremy", 151);
		std::cout << jeremy << std::endl;
		jeremy.promote(1);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	return 0;
}