/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimkwanho <kimkwanho@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 19:48:38 by kimkwanho         #+#    #+#             */
/*   Updated: 2021/08/16 13:05:38 by kimkwanho        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include		"Zombie.hpp"

Zombie			*zombieHorde(int _num, std::string _nam)
{
	Zombie		*_lst;

	_lst = new Zombie[_num];
	for (int _idx = 0; _idx < _num; _idx++)
		_lst[_idx].setName(_nam);
	return		_lst;
}