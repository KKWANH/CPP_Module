/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimkwanho <kimkwanho@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 16:55:12 by kimkwanho         #+#    #+#             */
/*   Updated: 2021/09/21 15:42:02 by kimkwanho        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include					"Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void)
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

Bureaucrat::Bureaucrat(const Bureaucrat& _cpy)
:	_nam(_cpy._nam)
{
	if (_cpy._grd < 1 || _cpy._grd > 150)
	{
		std::cout			<< ANSI_GRE << "[Bureaucrat] "
							<< ANSI_RES << "Parameter constructor..., "
							<< ANSI_RED << "[ERROR] "
							<< ANSI_RES << "Your parameter grade's range is something weird..! 1 ~ 150 is possible."
							<< ANSI_RES << std::endl;
		if (_cpy._grd < 1)
			throw			Bureaucrat::GradeTooHighException();
		if (_cpy._grd > 150)
			throw			Bureaucrat::GradeTooLowException();
	}
	std::cout				<< ANSI_GRE << "[Bureaucrat] "
							<< ANSI_RES << "Parameter constructor, "
							<< ANSI_YEL << "[Name][" << _nam << "] "
							<< ANSI_RES << "and "
							<< ANSI_YEL << "[Grade][" << _grd << "]"
							<< ANSI_RES << "."
							<< ANSI_RES << std::endl;
	this->_grd				= _cpy._grd;
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout				<< ANSI_GRE << "[Bureaucrat] "
							<< ANSI_RES << "Default destructor."
							<< ANSI_RES << std::endl;
}

Bureaucrat&					Bureaucrat::operator=(const Bureaucrat& _cpy)
{
	if (_cpy._grd < 1 || _cpy._grd > 150)
	{
		std::cout			<< ANSI_GRE << "[Bureaucrat] "
							<< ANSI_RES << "Parameter constructor..., "
							<< ANSI_RED << "[ERROR] "
							<< ANSI_RES << "Your parameter grade's range is something weird..! 1 ~ 150 is possible."
							<< ANSI_RES << std::endl;
		if (_cpy._grd < 1)
			throw			Bureaucrat::GradeTooHighException();
		if (_cpy._grd > 150)
			throw			Bureaucrat::GradeTooLowException();
	}
	std::cout				<< ANSI_GRE << "[Bureaucrat] "
							<< ANSI_RES << "Parameter constructor, "
							<< ANSI_YEL << "[Name][" << _nam << "] "
							<< ANSI_RES << "and "
							<< ANSI_YEL << "[Grade][" << _grd << "]"
							<< ANSI_RES << "."
							<< ANSI_RES << std::endl;
	this->_grd				= _cpy._grd;
	return					*this;
}

const char*					Bureaucrat::GradeTooHighException::what(void) const throw()
{
	std::string				_str;
	const char*				_rst;

	_str					= ANSI_GRE "[Bureaucrat] "
							  ANSI_YEL "[Exception] "
							  ANSI_RES "Grade is "
							  ANSI_RED "TOO HIGH"
							  ANSI_RES ".";
	_rst					= _str.c_str();
	return					_rst;
}

const char*					Bureaucrat::GradeTooLowException::what(void) const throw()
{
	std::string				_str;
	const char*				_rst;

	_str					= ANSI_GRE "[Bureaucrat] "
							  ANSI_YEL "[Exception] "
							  ANSI_RES "Grade is "
							  ANSI_RED "TOO LOW"
							  ANSI_RES ".";
	_rst					= _str.c_str();
	return					_rst;
}

void						Bureaucrat::increaseGrade(void)
{
	if (this->_grd == 1)
		throw				Bureaucrat::GradeTooHighException();
	std::cout				<< ANSI_GRE << "[Bureaucrat] "
							<< ANSI_RES << "Grade increased : "
							<< ANSI_YEL << "[" << this->_grd << "] to [" << this->_grd - 1 << "]";
	--this->_grd;
}

void						Bureaucrat::decreaseGrade(void)
{
	if (this->_grd == 150)
		throw				Bureaucrat::GradeTooLowException();
	std::cout				<< ANSI_GRE << "[Bureaucrat] "
							<< ANSI_RES << "Grade decreased : "
							<< ANSI_YEL << "[" << this->_grd << "] to [" << this->_grd + 1 << "]";
	++this->_grd;
}

std::string					Bureaucrat::getName(void) const
{
	return					this->_nam;
}

int							Bureaucrat::getGrade(void) const
{
	return					this->_grd;
}

void						Bureaucrat::signForm(Form& _frm)
{
	if (_frm.getIsSigned())
		std::cout			<< ANSI_GRE << "[Bureaucrat] "
							<< ANSI_RED << "[SIGN_ERROR] "
							<< ANSI_CYA << "[" << this->_nam << "] "
							<< ANSI_RES << "can't sign to "
							<< ANSI_YEL << "[" << _frm.getName() << "] "
							<< ANSI_RES << "because the form is already signed."
							<< ANSI_RES << std::endl;
	else if (this->_grd > _frm.getSignGrade())
		std::cout			<< ANSI_GRE << "[Bureaucrat] "
							<< ANSI_RED << "[SIGN_ERROR] "
							<< ANSI_CYA << "[" << this->_nam << "] "
							<< ANSI_RES << "can't sign to "
							<< ANSI_YEL << "[" << _frm.getName() << "] "
							<< ANSI_RES << "because grade is too low."
							<< ANSI_RES << std::endl;
	else
	{
		std::cout			<< ANSI_GRE << "[Bureaucrat] "
							<< ANSI_RED << "[SIGN] "
							<< ANSI_CYA << "[" << this->_nam << "] "
							<< ANSI_RES << "signs "
							<< ANSI_YEL << "[" << _frm.getName() << "]"
							<< ANSI_RES << "." << std::endl;
		_frm.beSigned(*this);
	}
}

void						Bureaucrat::executeForm(const Form& _frm)
{
	if (_frm.execute(*this))
		std::cout			<< ANSI_GRE << "[Bureaucrat] "
							<< ANSI_RES << "executes "
							<< ANSI_YEL << _frm.getName()
							<< ANSI_RES << std::endl;
	else
		std::cout			<< ANSI_GRE << "[Bureaucrat] "
							<< ANSI_RED << "execute FAILED."
							<< ANSI_RES << std::endl;
}

std::ostream&				operator<<(std::ostream& _out, const Bureaucrat& _obj)
{
	_out					<< ANSI_CYA << "[" << _obj.getName() << "]"
							<< ANSI_RES << " the bureaucrat's grade is : "
							<< ANSI_CYA << "[" << _obj.getGrade() << "]"
							<< ANSI_RES << "."
							<< std::endl;
	return					_out;
}