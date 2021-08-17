/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimkwanho <kimkwanho@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 10:47:36 by kimkwanho         #+#    #+#             */
/*   Updated: 2021/08/17 12:19:49 by kimkwanho        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef				CLAPTRAP_HPP
# define				CLAPTRAP_HPP

# include				<iostream>

# define				ANSI_RES	"\e[0;0m"
# define				ANSI_BOL	"\e[0;1m"
# define				ANSI_ITA	"\e[0;3m"
# define				ANSI_RED	"\e[0;31m"
# define				ANSI_GRE	"\e[0;32m"
# define				ANSI_YEL	"\e[0;33m"
# define				ANSI_BLU	"\e[0;34m"
# define				ANSI_MAG	"\e[0;35m"
# define				ANSI_CYA	"\e[0;36m"

class					ClapTrap
{

	protected:
	
		std::string		name;
		unsigned int	HitPoint;
		unsigned int	EnergyPoint;
		unsigned int	AttackDamage;
	
	public:
	
		ClapTrap(void);
		ClapTrap(std::string _nam);
		ClapTrap(const ClapTrap& _cpy);
		
		~ClapTrap(void);

		ClapTrap&		operator=(const ClapTrap &_cpy);
		void			attack(const std::string& _tgt);
		void			takeDamage(unsigned int _amt);
		void			beRepaired(unsigned int _amt);

};

# endif