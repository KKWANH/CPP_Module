/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimkwanho <kimkwanho@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 14:30:58 by kimkwanho         #+#    #+#             */
/*   Updated: 2021/09/21 17:16:38 by kimkwanho        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include					"base.hpp"

Base*						generate(void)
{
	int						_len;
	Base*					_rst;

	_len = rand() % 3;
	_rst = nullptr;

	if (_len == 0)
	{
		std::cout			<< ANSI_GRE << "[Generate] "
							<< ANSI_RES << "We successfully generated class "
							<< ANSI_RED << "[A]"
							<< ANSI_RES << "." << std::endl;
		_rst				= new A();
	}
	else if (_len == 1)
	{
		std::cout			<< ANSI_GRE << "[Generate] "
							<< ANSI_RES << "We successfully generated class "
							<< ANSI_CYA << "[B]"
							<< ANSI_RES << "." << std::endl;
		_rst				= new B();
	}
	else
	{
		std::cout			<< ANSI_GRE << "[Generate]   "
							<< ANSI_RES << "We successfully generated class "
							<< ANSI_YEL << "[C]"
							<< ANSI_RES << "." << std::endl;
		_rst				= new C();
	}
	
	return					_rst;
}

void						identify(Base* _arg)
{
	if (dynamic_cast<A *>(_arg) != nullptr)
		std::cout			<< ANSI_GRE << "[Identify *] "
							<< ANSI_RES << "We successfully identified your class. It is "
							<< ANSI_RED << "[A]"
							<< ANSI_RES << "!" << std::endl;
	else if (dynamic_cast<B *>(_arg) != nullptr)
		std::cout			<< ANSI_GRE << "[Identify *] "
							<< ANSI_RES << "We successfully identified your class. It is "
							<< ANSI_CYA << "[B]"
							<< ANSI_RES << "!" << std::endl;
	else if (dynamic_cast<C *>(_arg) != nullptr)
		std::cout			<< ANSI_GRE << "[Identify *] "
							<< ANSI_RES << "We successfully identified your class. It is "
							<< ANSI_YEL << "[C]"
							<< ANSI_RES << "!" << std::endl;
	else
		std::cout			<< ANSI_GRE << "[Identify *] "
							<< ANSI_RES << "We failed to identify your class. It is "
							<< ANSI_YEL << "[" << ANSI_ITA << "Whaaaaaat" << ANSI_RES << ANSI_YEL "]"
							<< ANSI_RES << ".. just... Nothing." << std::endl;
}

void						identify(Base& _arg)
{
	try
	{
		A&					_tmp = dynamic_cast<A &>(_arg);
		(void)_tmp;
		std::cout			<< ANSI_GRE << "[Identify &] "
							<< ANSI_RES << "We successfully identified your class. It is "
							<< ANSI_RED << "[A]"
							<< ANSI_RES << "!" << std::endl;
		return;
	}
	catch(std::bad_cast& _exp)
	{
	}
	
	try
	{
		B&					_tmp = dynamic_cast<B &>(_arg);
		(void)_tmp;
		std::cout			<< ANSI_GRE << "[Identify &] "
							<< ANSI_RES << "We successfully identified your class. It is "
							<< ANSI_CYA << "[B]"
							<< ANSI_RES << "!" << std::endl;
		return;
	}
	catch(std::bad_cast& _exp)
	{
	}
	
	try
	{
		C&					_tmp = dynamic_cast<C &>(_arg);
		(void)_tmp;
		std::cout			<< ANSI_GRE << "[Identify &] "
							<< ANSI_RES << "We successfully identified your class. It is "
							<< ANSI_YEL << "[C]"
							<< ANSI_RES << "!" << std::endl;
		return;
	}
	catch(std::bad_cast& _exp)
	{
	}
	
	std::cout				<< ANSI_GRE << "[Identify &] "
							<< ANSI_RES << "We failed to identify your class. It is "
							<< ANSI_YEL << "[" << ANSI_ITA << "Whaaaaaat" << ANSI_RES << ANSI_YEL "]"
							<< ANSI_RES << ".. just... Nothing." << std::endl;
}