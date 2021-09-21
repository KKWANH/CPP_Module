/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimkwanho <kimkwanho@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 16:55:27 by kimkwanho         #+#    #+#             */
/*   Updated: 2021/09/21 15:41:53 by kimkwanho        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include					"RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void)
:	Form("RobotomyRequestForm", 72, 45),
	_tgt("")
{
	std::cout				<< ANSI_GRE << "[RobotomyRequestForm] "
							<< ANSI_RES << "Default constructor."
							<< ANSI_RES << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string _tgt)
:	Form("RobotomyRequestForm", 72, 45),
	_tgt(_tgt)
{
	std::cout				<< ANSI_GRE << "[RobotomyRequestForm] "
							<< ANSI_RES << "Parameter constructor."
							<< ANSI_RES << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& _cpy)
:	Form(_cpy)
{
	std::cout				<< ANSI_GRE << "[RobotomyRequestForm] "
							<< ANSI_RES << "Copy constructor."
							<< ANSI_RES << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	std::cout				<< ANSI_GRE << "[RobotomyRequestForm] "
							<< ANSI_RES << "Default destructor."
							<< ANSI_RES << std::endl;
}

RobotomyRequestForm&		RobotomyRequestForm::operator=(const RobotomyRequestForm& _cpy)
{
	std::cout				<< ANSI_GRE << "[RobotomyRequestForm] "
							<< ANSI_RES << "Copy constructor."
							<< ANSI_RES << std::endl;
	this->_tgt				= _cpy._tgt;
	return					*this;
}

bool						RobotomyRequestForm::execute(const Bureaucrat& _exe) const
{
	if (!this->getIsSigned())
		throw				Form::NotSignedException();
	if (this->getExecuteGrade() < _exe.getGrade())
		throw				Bureaucrat::GradeTooLowException();
	std::cout				<< ANSI_GRE << "[RobotomyRequestForm] "
							<< ANSI_ITA << "dudududu...didididi..dududududududu... "
							<< ANSI_RES << std::endl;
	int						_rnd = rand() % 100;
	if (_rnd > 50)
		std::cout			<< ANSI_GRE << "[RobotomyRequestForm] "
							<< ANSI_GRE << "[" << this->_tgt << "]"
							<< ANSI_RES << " has been 🦾robotomized🦿 successfully. " << std::endl;
	else
		std::cout			<< ANSI_GRE << "[RobotomyRequestForm] "
							<< ANSI_RED << "[" << this->_tgt << "]"
							<< ANSI_RES << " failed to be 🦾robotomized🦿." << std::endl;
	return					true;
}