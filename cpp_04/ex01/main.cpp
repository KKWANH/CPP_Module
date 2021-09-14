/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimkwanho <kimkwanho@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 22:11:41 by kimkwanho         #+#    #+#             */
/*   Updated: 2021/09/14 17:20:08 by kimkwanho        ###   ########.fr       */
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

	std::cout 	<< "-----------------------------"
				<< std::endl;
	Animal		*_cpy = new Cat(*(Cat *)_anm[5]);

	for (int _idx=0; _idx<100; ++_idx)
		std::cout
				<< ((Cat *)_anm[5])->getBrain()->getIdea(_idx)
				<< std::endl;

	std::cout	<< "-----------------------------\n"
				<< std::endl;

	for (int _idx=0; _idx<10; ++_idx)
		delete	_anm[_idx];

	for (int _idx=0; _idx<100; ++_idx)
		std::cout
				<< ((Cat *)_cpy)->getBrain()->getIdea(_idx)
				<< std::endl;
	system("leaks Animals");
}
