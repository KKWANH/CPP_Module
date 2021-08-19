/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimkwanho <kimkwanho@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 18:41:47 by kimkwanho         #+#    #+#             */
/*   Updated: 2021/08/20 01:01:38 by kimkwanho        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef				DIAMONDTRAP_HPP
# define				DIAMONDTRAP_HPP

# include				<iostream>
# include				"FragTrap.hpp"
# include				"ScavTrap.hpp"
# include				"ClapTrap.hpp"

class					DiamondTrap : public FragTrap, public ScavTrap
{
	private:
		std::string		name;
	
	public:
		DiamondTrap(void);
		DiamondTrap(std::string _nam);
		DiamondTrap(const DiamondTrap& _cpy);
		~DiamondTrap(void);
		DiamondTrap& operator=(const DiamondTrap& _cpy);

		void			attack(const std::string& _tgt);
		void			whoAmI(void);
};

# endif