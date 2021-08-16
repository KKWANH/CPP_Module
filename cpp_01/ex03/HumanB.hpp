/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimkwanho <kimkwanho@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 12:11:44 by kimkwanho         #+#    #+#             */
/*   Updated: 2021/08/16 13:06:10 by kimkwanho        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef		HUMANB_HPP
# define		HUMANB_HPP

# include		"Weapon.hpp"
# include		<iostream>

class					HumanB
{
	public:
		HumanB(std::string _nam);
		~HumanB(void);
		void			attack(void);
		void			setWeapon(Weapon& _wpn);
	
	private:
		std::string		name;
		Weapon*			weapon;
};

# endif