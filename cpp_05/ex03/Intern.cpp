/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimkwanho <kimkwanho@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 06:18:30 by kimkwanho         #+#    #+#             */
/*   Updated: 2021/09/14 17:23:16 by kimkwanho        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include					"Intern.hpp"

const Intern::formType_		_lst[] = 
{
	{"Shrubbery Creation",	&Intern::makeShrubberyCreationForm_},
	{"Presidential Pardon", &Intern::makePresidentialPardonForm_},
	{"Robotomy Request",	&Intern::makeRobotomyRequestForm_},
};

Intern::Intern(void)
:	_nam(""),
	_grd(1)
{
	std::cout				<< ANSI_GRE << "[Bureaucrat] "
							<< ANSI_RES << "Default constructor."
							<< ANSI_RES << std::endl;
}

Bureaucrat::Bureaucrat(std::string _nam, int _grd)
:	_nam(_nam)
{
	if (_grd < 1 || _grd > 150)
	{
		std::cout			<< ANSI_GRE << "[Bureaucrat] "
							<< ANSI_RES << "Parameter constructor..., "
							<< ANSI_RED << "[ERROR] "
							<< ANSI_RES << "Your parameter grade's range is something weird..! 1 ~ 150 is possible."
							<< ANSI_RES << std::endl;
		if (_grd < 1)
			throw			Bureaucrat::GradeTooHighException();
		if (_grd > 150)
			throw			Bureaucrat::GradeTooLowException();
	}
	std::cout				<< ANSI_GRE << "[Bureaucrat] "
							<< ANSI_RES << "Parameter constructor, "
							<< ANSI_YEL << "[Name][" << _nam << "] "
							<< ANSI_RES << "and "
							<< ANSI_YEL << "[Grade][" << _grd << "]"
							<< ANSI_RES << "."
							<< ANSI_RES << std::endl;
	this->_grd				= _grd;
}
