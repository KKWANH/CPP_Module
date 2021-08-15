/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimkwanho <kimkwanho@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 11:17:37 by kimkwanho         #+#    #+#             */
/*   Updated: 2021/08/15 11:23:03 by kimkwanho        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include		<iostream>

int				main(void)
{
	std::string	_str	= "HI THIS IS BRAIN";
	std::string	*_ptr	= &_str;
	std::string	&_ref	= _str;

	std::cout	<< &_str << std::endl;
	std::cout	<< &_ptr << std::endl;
	std::cout	<< &_ref << std::endl;
	std::cout	<< _str  << std::endl;
	std::cout	<< *_ptr << std::endl;
	std::cout	<< _ref  << std::endl;
}