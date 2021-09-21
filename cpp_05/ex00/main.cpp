/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimkwanho <kimkwanho@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 20:30:20 by kimkwanho         #+#    #+#             */
/*   Updated: 2021/09/21 15:41:28 by kimkwanho        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include					<iostream>
# include					"Bureaucrat.hpp"

int							main(void)
{
	Bureaucrat				francis("Francis", 100);
	std::cout				<< francis << std::endl;
	francis.increaseGrade();
	std::cout				<< francis << std::endl;
	francis.decreaseGrade();
	std::cout				<< francis << std::endl;

	try
	{
		Bureaucrat			kkim("kkim", 0);
		std::cout			<< kkim << std::endl;
	}
	catch (std::exception const &_exc)
	{
		std::cerr			<< _exc.what() << std::endl;
	}

	try
	{
		Bureaucrat			kkim("kkim", 1000);
		std::cout			<< kkim << std::endl;
	}
	catch (std::exception const &_exc)
	{
		std::cerr			<< _exc.what() << std::endl;
	}

	try
	{
		Bureaucrat			kkim("kkim", 1);
		std::cout			<< kkim << std::endl;
		kkim.increaseGrade();
		std::cout			<< kkim << std::endl;
	}
	catch (std::exception const &_exc)
	{
		std::cerr			<< _exc.what() << std::endl;
	}

	try
	{
		Bureaucrat			kkim("kkim", 150);
		std::cout			<< kkim << std::endl;
		kkim.decreaseGrade();
		std::cout			<< kkim << std::endl;
	}
	catch (std::exception const &_exc)
	{
		std::cerr			<< _exc.what() << std::endl;
	}

	return (0);
}
