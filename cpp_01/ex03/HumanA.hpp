/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimkwanho <kimkwanho@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 12:11:44 by kimkwanho         #+#    #+#             */
/*   Updated: 2021/08/15 13:24:04 by kimkwanho        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef		HUMANA_HPP
# define		HUMANA_HPP

# include		"Weapon.hpp"
# include		<iostream>

class					HumanA
{
	public:
		HumanA(std::string _nam, Weapon& _wpn);
		~HumanA(void);
		void			attack(void);
		void			setWeapon(Weapon& _wpn);
	
	private:
		std::string		name;
		Weapon*			weapon;
};

# endif