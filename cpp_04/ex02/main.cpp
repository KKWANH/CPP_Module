/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimkwanho <kimkwanho@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 22:11:41 by kimkwanho         #+#    #+#             */
/*   Updated: 2021/08/28 17:23:14 by kimkwanho        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include		<iostream>
# include		"Dog.hpp"
# include		"Cat.hpp"

int				main(void)
{
	Animal		*_anm[10];
	
	for (int _idx=0; _idx<10; ++_idx)
	{
		if (_idx % 2 == 0)
			_anm[_idx] = new Dog();
		else
			_anm[_idx] = new Cat();
	}

	std::cout	<< "-----------------------------\n"
				<< std::endl;

	for (int _idx=0; _idx<10; ++_idx)
		_anm[_idx]->makeSound();
		
	std::cout	<< "\n-----------------------------\n"
				<< std::endl;

	for (int _idx=0; _idx<10; ++_idx)
		delete	_anm[_idx];

	system("leaks Animals");
}
