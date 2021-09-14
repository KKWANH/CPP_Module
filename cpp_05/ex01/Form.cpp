/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimkwanho <kimkwanho@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 16:55:12 by kimkwanho         #+#    #+#             */
/*   Updated: 2021/09/05 18:33:42 by kimkwanho        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include					"Form.hpp"

Form::Form(void)
:	_nam(""),
	_chk(false),
	_sgn(149),
	_exe(149)
{
	std::cout				<< ANSI_GRE << "[Form] "
							<< ANSI_RES << "Default constructor."
							<< ANSI_RES << std::endl;
}

Form::Form(std::string _nam, int _sgn, int _exe)
:	_nam(_nam),
	_chk(false),
	_sgn(_sgn),
	_exe(_exe)
{
	if (_sgn < 1 || _exe < 1 || _sgn > 150 || _exe > 150)
	{
		std::cout			<< ANSI_GRE << "[Form] "
							<< ANSI_RES << "Parameter constructor..., "
							<< ANSI_RED << "[ERROR] "
							<< ANSI_RES << "Your parameter's range is something weird..! 1 ~ 150 is possible."
							<< ANSI_RES << std::endl;
		if (_sgn < 1 || _exe < 1)
			throw			Form::GradeTooHighException();
		if (_sgn > 150 || _exe > 150)
			throw			Form::GradeTooLowException();
	}
	std::cout				<< ANSI_GRE << "[Form] "
							<< ANSI_RES << "Parameter constructor"
							<< ANSI_RES << std::endl;
}

Form::Form(const Form& _cpy)
:	_nam(_cpy._nam),
	_sgn(_cpy._sgn),
	_exe(_cpy._exe)
{
	if (_sgn < 1 || _exe < 1 || _sgn > 150 || _exe > 150)
	{
		std::cout			<< ANSI_GRE << "[Form] "
							<< ANSI_RES << "Parameter constructor..., "
							<< ANSI_RED << "[ERROR] "
							<< ANSI_RES << "Your parameter's range is something weird..! 1 ~ 150 is possible."
							<< ANSI_RES << std::endl;
		if (_sgn < 1 || _exe < 1)
			throw			Form::GradeTooHighException();
		if (_sgn > 150 || _exe > 150)
			throw			Form::GradeTooLowException();
	}
	std::cout				<< ANSI_GRE << "[Form] "
							<< ANSI_RES << "Copy constructor"
							<< ANSI_RES << std::endl;
}


Form::~Form(void)
{
	std::cout				<< ANSI_GRE << "[Form] "
							<< ANSI_RES << "Default destructor."
							<< ANSI_RES << std::endl;
}

Form&						Form::operator=(const Form& _cpy)
{
	this->_chk = _cpy._chk;
	if (_cpy._sgn < 1 || _cpy._exe < 1 || _cpy._sgn > 150 || _cpy._exe > 150)
	{
		std::cout			<< ANSI_GRE << "[Form] "
							<< ANSI_RES << "Parameter constructor..., "
							<< ANSI_RED << "[ERROR] "
							<< ANSI_RES << "Your parameter grade's range is something weird..! 1 ~ 150 is possible."
							<< ANSI_RES << std::endl;
		if (_cpy._sgn < 1 || _cpy._exe < 1)
			throw			Form::GradeTooHighException();
		if (_cpy._sgn > 150 || _cpy._exe > 150)
			throw			Form::GradeTooLowException();
	}
	std::cout				<< ANSI_GRE << "[Bureaucrat] "
							<< ANSI_RES << "= Operator"
							<< ANSI_RES << std::endl;
	return					*this;
}

const char*					Form::GradeTooHighException::what(void) const throw()
{
	std::string				_str;
	const char*				_rst;

	_str					= ANSI_GRE "[Form] "
							  ANSI_YEL "[Exception] "
							  ANSI_RES "Grade is "
							  ANSI_RED "TOO HIGH"
							  ANSI_RES ".";
	_rst					= _str.c_str();
	return					_rst;
}

const char*					Form::GradeTooLowException::what(void) const throw()
{
	std::string				_str;
	const char*				_rst;

	_str					= ANSI_GRE "[Form] "
							  ANSI_YEL "[Exception] "
							  ANSI_RES "Grade is "
							  ANSI_RED "TOO LOW"
							  ANSI_RES ".";
	_rst					= _str.c_str();
	return					_rst;
}

void						Form::beSigned(Bureaucrat& _bur)
{
	if (this->_sgn >= _bur.getGrade())
	{
		std::cout			<< ANSI_GRE << "[Form] "
							<< ANSI_YEL << "[" << _bur.getName() << "] "
							<< ANSI_RES << "signed on the form "
							<< ANSI_YEL << "[" << this->_nam << "]"
							<< ANSI_RES << std::endl;
		this->_chk = 1;
	}
	else
		throw				Form::GradeTooLowException();
}

const std::string			Form::getName(void) const
{
	return					this->_nam;
}

int							Form::getSignGrade(void) const
{
	return					this->_sgn;
}

int							Form::getExecuteGrade(void) const
{
	return					this->_exe;
}

bool						Form::getIsSigned(void) const
{
	return					this->_chk;
}

std::ostream&				operator<<(std::ostream& _out, const Form& _obj)
{
	_out					<< ANSI_CYA << "[" << _obj.getName() << "]"
							<< ANSI_RES << "[Sign Grade]"
							<< ANSI_CYA << "[" << _obj.getSignGrade() << "], "
							<< ANSI_RES << "[Execute Grade]"
							<< ANSI_CYA << "[" << _obj.getExecuteGrade() << "], "
							<< ANSI_RES << "[Is Signed]"
							<< ANSI_CYA << "[" << _obj.getIsSigned() << "]"
							<< ANSI_RES;
	return					_out;
}