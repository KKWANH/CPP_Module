/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimkwanho <kimkwanho@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 12:51:35 by kimkwanho         #+#    #+#             */
/*   Updated: 2021/08/16 13:05:19 by kimkwanho        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include		"Zombie.hpp"

Zombie			*newZombie(std::string _nam)
{
	Zombie		*_zom = new Zombie(_nam);
	_zom->announce();
	return		(_zom);
}