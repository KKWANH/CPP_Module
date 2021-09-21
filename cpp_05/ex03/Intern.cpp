/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimkwanho <kimkwanho@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 06:18:30 by kimkwanho         #+#    #+#             */
/*   Updated: 2021/09/21 15:42:05 by kimkwanho        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include					"Intern.hpp"

const Intern::formType_		Intern::_lst[] = 
{
	{"shrubbery creation",	&Intern::makeShrubberyCreationForm_},
	{"presidential pardon", &Intern::makePresidentialPardonForm_},
	{"robotomy request",	&Intern::makeRobotomyRequestForm_},
};

Intern::Intern(void)
{
	std::cout				<< ANSI_GRE << "[Intern] "
							<< ANSI_RES << "Default constructor."
							<< ANSI_RES << std::endl;
}

Intern::Intern(const Intern& _cpy)
{
	std::cout				<< ANSI_GRE << "[Intern] "
							<< ANSI_RES << "Copy constructor. (empty)"
							<< ANSI_RES << std::endl;
	(void)_cpy;
}

Intern::~Intern(void)
{
	std::cout				<< ANSI_GRE << "[Intern] "
							<< ANSI_RES << "Default destructor."
							<< ANSI_RES << std::endl;
}

Intern&						Intern::operator=(const Intern& _cpy)
{
	std::cout				<< ANSI_GRE << "[Intern] "
							<< ANSI_RES << "= Assignment."
							<< ANSI_RES << std::endl;
	(void)_cpy;
	return					*this;
}

Form*						Intern::makePresidentialPardonForm_(const std::string& _tgt)
{
	return					new PresidentialPardonForm(_tgt);
}

Form*						Intern::makeRobotomyRequestForm_(const std::string& _tgt)
{
	return					new RobotomyRequestForm(_tgt);
}

Form*						Intern::makeShrubberyCreationForm_(const std::string& _tgt)
{
	return					new ShrubberyCreationForm(_tgt);
}

Form*						Intern::makeForm(std::string _nam, std::string _tgt)
{
	for (int _idx = 0; _idx < 3; _idx++)
	{
		if (_nam == Intern::_lst[_idx]._nam)
		{
			std::cout		<< ANSI_GRE << "[Intern] "
							<< ANSI_RES << "created form: "
							<< ANSI_YEL << "[" << _lst[_idx]._nam << "]"
							<< ANSI_RES << std::endl;
			return			(this->*(_lst[_idx]._fnc))(_tgt);
		}
	}
	std::cout				<< ANSI_GRE << "[Intern] "
							<< ANSI_RED << "[ERROR] "
							<< ANSI_RES << "cannot create form: "
							<< ANSI_YEL  << "[" << _nam << "]"
							<< ANSI_RES << std::endl;
	return					(NULL);
}