/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimkwanho <kimkwanho@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 16:55:27 by kimkwanho         #+#    #+#             */
/*   Updated: 2021/09/21 15:42:11 by kimkwanho        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include					"ShrubberyCreationForm.hpp"

std::string					tree = 
"                                                         .\n"
"                                              .         ;  \n"
"                 .              .              ;%     ;;   \n"
"                   ,           ,                :;%  %;   \n"
"                    :         ;                   :;%;'     .,   \n"
"           ,.        %;     %;            ;        %;'    ,;\n"
"             ;       ;%;  %%;        ,     %;    ;%;    ,%'\n"
"              %;       %;%;      ,  ;       %;  ;%;   ,%;' \n"
"               ;%;      %;        ;%;        % ;%;  ,%;'\n"
"                `%;.     ;%;     %;'         `;%%;.%;'\n"
"                 `:;%.    ;%%. %@;        %; ;@%;%'\n"
"                    `:%;.  :;bd%;          %;@%;'\n"
"                      `@%:.  :;%.         ;@@%;'   \n"
"                        `@%.  `;@%.      ;@@%;         \n"
"                          `@%%. `@%%    ;@@%;        \n"
"                            ;@%. :@%%  %@@%;       \n"
"                              %@bd%%%bd%%:;     \n"
"                                #@%%%%%:;;\n"
"                                %@@%%%::;\n"
"                                %@@@%(o);  . '         \n"
"                                %@@@o%;:(.,'         \n"
"                            `.. %@@@o%::;         \n"
"                               `)@@@o%::;         \n"
"                                %@@(o)::;        \n"
"                               .%@@@@%::;         \n"
"                               ;%@@@@%::;.          \n"
"                              ;%@@@@%%:;;;. \n"
"                          ...;%@@@@@%%:;;;;,..\n";

ShrubberyCreationForm::ShrubberyCreationForm(void)
:	Form("ShrubberyCreationForm", 145, 137),
	_tgt("")
{
	std::cout				<< ANSI_GRE << "[ShrubberyCreationForm] "
							<< ANSI_RES << "Default constructor."
							<< ANSI_RES << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string _tgt)
:	Form("ShrubberyCreationForm", 145, 137),
	_tgt(_tgt)
{
	std::cout				<< ANSI_GRE << "[ShrubberyCreationForm] "
							<< ANSI_RES << "Parameter constructor."
							<< ANSI_RES << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& _cpy)
:	Form(_cpy)
{
	std::cout				<< ANSI_GRE << "[ShrubberyCreationForm] "
							<< ANSI_RES << "Copy constructor."
							<< ANSI_RES << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	std::cout				<< ANSI_GRE << "[ShrubberyCreationForm] "
							<< ANSI_RES << "Default destructor."
							<< ANSI_RES << std::endl;
}

ShrubberyCreationForm&		ShrubberyCreationForm::operator=(const ShrubberyCreationForm& _cpy)
{
	std::cout				<< ANSI_GRE << "[ShrubberyCreationForm] "
							<< ANSI_RES << "Copy constructor."
							<< ANSI_RES << std::endl;
	this->_tgt				= _cpy._tgt;
	return					*this;
}

bool						ShrubberyCreationForm::execute(const Bureaucrat& _exe) const
{
	if (!this->getIsSigned())
		throw				Form::NotSignedException();
	if (this->getExecuteGrade() < _exe.getGrade())
		throw				Bureaucrat::GradeTooLowException();
		
	const std::string		_shr = (this->_tgt + "_shrubbery");
	std::ofstream			_out(_shr, std::ios::out | std::ios::app);

	if (!_out.is_open() || _out.bad())
		throw				TargetFileOpenException();
	_out					<< tree;
	_out					<< std::endl;
	_out.close();
	if (_out.bad())
		throw			WriteException();
	return					true;
}

const char*					ShrubberyCreationForm::TargetFileOpenException::what(void) const throw()
{
	std::string				_str;
	const char*				_rst;

	_str					= ANSI_GRE "[ShrubberyCreationForm] "
							  ANSI_YEL "[Exception] "
							  ANSI_RED "Cannot open file"
							  ANSI_RES ".";
	_rst					= _str.c_str();
	return					_rst;
}

const char*					ShrubberyCreationForm::WriteException::what(void) const throw()
{
	std::string				_str;
	const char*				_rst;

	_str					= ANSI_GRE "[ShrubberyCreationForm] "
							  ANSI_YEL "[Exception] "
							  ANSI_RED "Cannot write to the file"
							  ANSI_RES ".";
	_rst					= _str.c_str();
	return					_rst;
}