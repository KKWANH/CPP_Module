/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimkwanho <kimkwanho@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 11:12:12 by kimkwanho         #+#    #+#             */
/*   Updated: 2021/08/16 13:05:42 by kimkwanho        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include		"Zombie.hpp"

int				main(void)
{
	Zombie		*_arr = zombieHorde(10, "zombie");

	for(int _idx=0; _idx < 10; _idx++)
		_arr[_idx].announce();
	delete[]	_arr;
	return		(0);
}
