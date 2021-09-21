/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimkwanho <kimkwanho@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 16:55:27 by kimkwanho         #+#    #+#             */
/*   Updated: 2021/09/21 15:41:51 by kimkwanho        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include					"PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void)
:	Form("PresidentialPardonForm", 25, 5),
	_tgt("")
{
	std::cout				<< ANSI_GRE << "[PresidentialPardonForm] "
							<< ANSI_RES << "Default constructor."
							<< ANSI_RES << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string _tgt)
:	Form("PresidentialPardonForm", 25, 5),
	_tgt(_tgt)
{
	std::cout				<< ANSI_GRE << "[PresidentialPardonForm] "
							<< ANSI_RES << "Parameter constructor."
							<< ANSI_RES << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& _cpy)
:	Form(_cpy)
{
	std::cout				<< ANSI_GRE << "[PresidentialPardonForm] "
							<< ANSI_RES << "Copy constructor."
							<< ANSI_RES << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	std::cout				<< ANSI_GRE << "[PresidentialPardonForm] "
							<< ANSI_RES << "Default destructor."
							<< ANSI_RES << std::endl;
}

PresidentialPardonForm&		PresidentialPardonForm::operator=(const PresidentialPardonForm& _cpy)
{
	std::cout				<< ANSI_GRE << "[PresidentialPardonForm] "
							<< ANSI_RES << "Copy constructor."
							<< ANSI_RES << std::endl;
	this->_tgt				= _cpy._tgt;
	return					*this;
}

bool						PresidentialPardonForm::execute(const Bureaucrat& _exe) const
{
	if (!this->getIsSigned())
		throw				Form::NotSignedException();
	if (this->getExecuteGrade() < _exe.getGrade())
		throw				Bureaucrat::GradeTooLowException();
	std::cout				<< ANSI_GRE << "[" << this->_tgt << "] "
							<< ANSI_RES << " has been "
							<< ANSI_YEL << "pardoned "
							<< ANSI_RES << "by "
							<< ANSI_RED << "Zafod Beeblebrox."
							<< ANSI_RES << std::endl;
	return					true;
}