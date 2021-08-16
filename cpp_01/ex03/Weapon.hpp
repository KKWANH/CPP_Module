/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimkwanho <kimkwanho@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 11:31:37 by kimkwanho         #+#    #+#             */
/*   Updated: 2021/08/16 13:06:25 by kimkwanho        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef		WEAPON_HPP
# define		WEAPON_HPP

# include		<iostream>

# define		ANSI_RES	"\e[0;0m"
# define		ANSI_BOL	"\e[0;1m"
# define		ANSI_ITA	"\e[0;3m"
# define		ANSI_RED	"\e[0;31m"
# define		ANSI_GRE	"\e[0;32m"
# define		ANSI_YEL	"\e[0;33m"
# define		ANSI_BLU	"\e[0;34m"
# define		ANSI_MAG	"\e[0;35m"
# define		ANSI_CYA	"\e[0;36m"

class						Weapon
{
	public:
		Weapon();
		Weapon(std::string _typ);
		void				setType(std::string _typ);
		const std::string	getType(void);

	private:
		std::string			type;
};

# endif