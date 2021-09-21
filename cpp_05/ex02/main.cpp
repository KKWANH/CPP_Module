/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimkwanho <kimkwanho@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 15:42:59 by kimkwanho         #+#    #+#             */
/*   Updated: 2021/09/21 15:43:00 by kimkwanho        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

void _test_shrubbery(std::string const &name_bure,
					 int grade, std::string const &target)
{
	try
	{
		std::cout << name_bure << "'s test" << std::endl;

		Bureaucrat bure(name_bure, grade);
		ShrubberyCreationForm form(target);

		bure.signForm(form);
		std::cout << form << std::endl;
		form.execute(bure);
	}
	catch (std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
	std::cout << std::endl;
}

void _test_robotomy(std::string const &name_bure,
					int grade, std::string const &target)
{
	try
	{
		std::cout << name_bure << "'s test" << std::endl;

		Bureaucrat bure(name_bure, grade);
		RobotomyRequestForm form(target);

		bure.signForm(form);
		std::cout << form << std::endl;
		form.execute(bure);
	}
	catch (std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
	std::cout << std::endl;
}

void _test_presidential(std::string const &name_bure,
						int grade, std::string const &target)
{
	try
	{
		std::cout << name_bure << "'s test" << std::endl;

		Bureaucrat bure(name_bure, grade);
		PresidentialPardonForm form(target);

		bure.signForm(form);
		std::cout << form << std::endl;
		form.execute(bure);
	}
	catch (std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
	std::cout << std::endl;
}

void _test_bure(std::string const &name_bure, int grade,
				std::string const &target)
{

	std::cout << name_bure << "'s test" << std::endl;

	Bureaucrat bure(name_bure, grade);
	ShrubberyCreationForm shrubbery(target);
	RobotomyRequestForm robotomy(target);
	PresidentialPardonForm presidential(target);

	try
	{
		bure.signForm(shrubbery);
		bure.executeForm(shrubbery);
	}
	catch (std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		bure.signForm(robotomy);
		bure.executeForm(robotomy);
	}
	catch (std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		bure.signForm(presidential);
		bure.executeForm(presidential);
	}
	catch (std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
	std::cout << std::endl;
}

int main()
{
	srand(time(NULL));

	std::cout << "<SHURUBBERY TESTS>" << std::endl;
	_test_shrubbery("KKIM", 10, "test1");
	_test_shrubbery("Akaps", 140, "test2");
	_test_shrubbery("Ralo", 150, "test3");
	_test_shrubbery("Pnpm", 999, "test4");
	_test_shrubbery("요플래", -999, "test5");

	std::cout << "<ROBOTOMY TESTS>" << std::endl;
	_test_robotomy("KKIM", 10, "test11");
	_test_robotomy("Akaps", 45, "test22");
	_test_robotomy("Ralo", 60, "test33");
	_test_robotomy("Pnpm", 999, "test44");
	_test_robotomy("요플래", -999, "test55");

	std::cout << "<PRESIDENTIAL TESTS>" << std::endl;
	_test_presidential("KKIM", 1, "test111");
	_test_presidential("Akaps", 10, "test222");
	_test_presidential("Ralo", 60, "test333");
	_test_presidential("Pnpm", 999, "test444");
	_test_presidential("요플래", -999, "test555");

	std::cout << "<BUREAUCRAT TESTS>" << std::endl;
	_test_bure("도", 140, "test1111");
	_test_bure("랄", 60, "test2222");
	_test_bure("팤", 10, "test3333");
	return 0;
}
