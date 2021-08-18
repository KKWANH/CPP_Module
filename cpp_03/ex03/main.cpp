/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimkwanho <kimkwanho@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 12:20:27 by kimkwanho         #+#    #+#             */
/*   Updated: 2021/08/18 19:15:50 by kimkwanho        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include		"DiamondTrap.hpp"

int				main(void)
{
	DiamondTrap _dmt("diamond");

	_dmt.highFivesGuys();
	_dmt.attack("kkim");
	_dmt.beRepaired(10);
	_dmt.takeDamage(10);
	_dmt.whoAmI();
	return 0;
}
