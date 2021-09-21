/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scalar.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimkwanho <kimkwanho@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 14:30:58 by kimkwanho         #+#    #+#             */
/*   Updated: 2021/09/21 15:00:16 by kimkwanho        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include					"scalar.hpp"

Scalar::Scalar(void)
:	_str("")
{
	std::cout				<< ANSI_GRE << "[Scalar] "
							<< ANSI_RES << "Default constructor!"
							<< ANSI_RES << std::endl;
}

Scalar::Scalar(const std::string& _arg)
{
	std::cout				<< ANSI_GRE << "[Scalar] "
							<< ANSI_RES << "Default constructor with parameter!"
							<< ANSI_RES << std::endl;
	if (_arg.size() == 1 &&
		_arg.at(0) <= 127 && _arg.at(0) >= -128 &&
		(_arg.at(0) < '0' || _arg.at(0) > '9'))
		this->_str			= std::to_string(_arg.at(0));
	else
		this->_str			= _arg;
}

Scalar::Scalar(const Scalar& _cpy)
{
	std::cout				<< ANSI_GRE << "[Scalar] "
							<< ANSI_RES << "Copy constructor!"
							<< ANSI_RES << std::endl;
	this->_str				= _cpy._str;
}

Scalar::~Scalar(void)
{
	std::cout				<< ANSI_GRE << "[Scalar] "
							<< ANSI_RES << "Default destructor!"
							<< ANSI_RES << std::endl;
}

Scalar&						Scalar::operator=(const Scalar& _cpy)
{
	std::cout				<< ANSI_GRE << "[Scalar] "
							<< ANSI_RES << "= Assignment!"
							<< ANSI_RES << std::endl;
	this->_str				= _cpy._str;
	return					*this;
}


Scalar::operator char(void) const
{
	// string-to-char는 없기에 string-to-int로 처리
	int						_chr;

	try
	{
		if (this->_str.find('e') != std::string::npos)
		{
			double			_dbl;
			_dbl			= std::stod(this->_str);

			if (_dbl > INT_MAX || _dbl < INT_MIN)
				throw(Scalar::ImpossibleException());
			else
				_chr		= static_cast<int>(_dbl);
		}
		else
			_chr			= std::stoi(this->_str);
	}
	catch(const std::exception& _exp)
	{
		throw(Scalar::ImpossibleException());
	}
	if (_chr < -128 || _chr > 127)
		throw(Scalar::ImpossibleException());
	else if (_chr < 32 || _chr > 126)
		throw(Scalar::NonDisplayableException());
	return					(static_cast<char>(_chr));
}

Scalar::operator int(void) const
{
	int						_num;

	try
	{
		if (this->_str.find('e') != std::string::npos)
		{
			double			_dbl;
			_dbl			= std::stod(this->_str);

			if (_dbl > INT_MAX || _dbl < INT_MIN)
				throw(Scalar::ImpossibleException());
			else
				_num		= static_cast<int>(_dbl);
		}
		else
			_num			= std::stoi(this->_str);
	}
	catch(const std::exception& _exp)
	{
		throw(Scalar::ImpossibleException());
	}
	return					_num;
}

Scalar::operator double(void) const
{
	double					_dbl = 0;

	try
	{
		_dbl				= std::stod(this->_str);
	}
	catch(const std::exception& _exp)
	{
		throw(Scalar::ImpossibleException());
	}
	return					_dbl;
}

Scalar::operator float(void) const
{
	float					_flt = 0;

	try
	{
		_flt				= std::stof(this->_str);
	}
	catch(const std::exception& _exp)
	{
		throw(Scalar::ImpossibleException());
	}
	return					_flt;
}


void						Scalar::PrintInt(void)
{
	try
	{
		std::cout			<< ANSI_GRE << "[Scalar] "
							<< ANSI_CYA << "[Type: int   ] "
							<< ANSI_RES << ": " << static_cast<int>(*this)
							<< std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr			<< e.what() << std::endl;
	}
}

void						Scalar::PrintChar(void)
{
	char					_chr;

	try
	{
		
		std::cout			<< ANSI_GRE << "[Scalar] "
							<< ANSI_CYA << "[Type: char  ] ";
		_chr				= static_cast<char>(*this);
		std::cout			<< ANSI_RES << ": '" << _chr << "'"
							<< std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr			<< e.what() << std::endl;
	}
}

void						Scalar::PrintFloat(void)
{
	float					_flt;
	std::stringstream		_sts;

	try
	{
		std::cout			<< ANSI_GRE << "[Scalar] "
							<< ANSI_CYA << "[Type: float ] ";
		_flt				= static_cast<float>(*this);
		std::cout			<< ANSI_RES << ": " << _flt;
		if (!(std::isinf(_flt) || std::isnan(_flt)))
		{
			_sts			<< std::scientific << _flt;
			
			std::string		_tmp = _sts.str();
			_tmp			= _tmp.substr(_tmp.find('e') + 1);

			int				_len = std::stoi(_tmp);
			if (_len >= 0 && _len < 6)
				if (fabs(_flt - round(_flt)) < 0.0001)
					std::cout
							<< ".0";
		}
		std::cout			<< "f" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr			<< e.what() << std::endl;
	}
}

void						Scalar::PrintDouble(void)
{
	double					_dbl;
	std::stringstream		_sts;

	try
	{
		_dbl				= static_cast<double>(*this);
		std::cout			<< ANSI_GRE << "[Scalar] "
							<< ANSI_CYA << "[Type: double] "
							<< ANSI_RES << ": " << _dbl;
		if (!(std::isinf(_dbl) || std::isnan(_dbl)))
		{
			_sts			<< std::scientific << _dbl;
			
			std::string		_tmp = _sts.str();
			_tmp			= _tmp.substr(_tmp.find('e') + 1);

			int				_len = std::stoi(_tmp);
			if (_len >= 0 && _len < 6)
				if (fabs(_dbl - round(_dbl)) < 0.0001)
					std::cout
							<< ".0";
		}
		std::cout			<< std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr			<< e.what() << std::endl;
	}
}


const char*					Scalar::ImpossibleException::what(void) const throw()
{
	std::string				_str;
	const char*				_rst;
	
	_str					=	ANSI_RED "[ERROR]"
								ANSI_RES " impossible!";
	_rst					=	_str.c_str();
	
	return					_rst;
}

const char*					Scalar::NonDisplayableException::what(void) const throw()
{
	std::string				_str;
	const char*				_rst;
	
	_str					=	ANSI_RED "[ERROR]"
								ANSI_RES " It's not displayable object!";
	_rst					=	_str.c_str();
	
	return					_rst;
}