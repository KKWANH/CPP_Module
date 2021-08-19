/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimkwanho <kimkwanho@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 11:44:50 by kimkwanho         #+#    #+#             */
/*   Updated: 2021/08/20 01:00:56 by kimkwanho        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include		"ClapTrap.hpp"

int				main(void)
{
	ClapTrap clap("Clap");

	clap.attack("Enemy");
	clap.beRepaired(10);
	clap.takeDamage(10);
	clap.takeDamage(10);
	clap.takeDamage(10);
	
	return 0;
}
