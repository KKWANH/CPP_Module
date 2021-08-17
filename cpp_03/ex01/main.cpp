/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimkwanho <kimkwanho@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 12:20:27 by kimkwanho         #+#    #+#             */
/*   Updated: 2021/08/17 12:20:28 by kimkwanho        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include		"ScavTrap.hpp"

int				main(void)
{
	ScavTrap	scav("scav");

	scav.GuardGate();
	scav.attack("kkim");
	scav.beRepaired(10);
	scav.takeDamage(10);
	
	return 0;
}
