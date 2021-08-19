/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimkwanho <kimkwanho@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 12:20:27 by kimkwanho         #+#    #+#             */
/*   Updated: 2021/08/20 01:01:34 by kimkwanho        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include		"FragTrap.hpp"

int				main(void)
{
	FragTrap	frag("fragtrap");

	frag.highFivesGuys();
	frag.attack("kkim");
	frag.beRepaired(10);
	frag.takeDamage(10);
	
	return 0;
}
