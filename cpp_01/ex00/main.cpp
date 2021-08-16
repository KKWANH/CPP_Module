/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimkwanho <kimkwanho@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 12:40:21 by kimkwanho         #+#    #+#             */
/*   Updated: 2021/08/16 13:05:16 by kimkwanho        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include		"Zombie.hpp"

int				main(void)
{
	Zombie		*_zom;
	
	_zom = newZombie("ZOMBIE:heap");
	randomChump("ZOMBIE:stack");
	delete		_zom;
	return		(0);
}