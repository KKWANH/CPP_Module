/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimkwanho <kimkwanho@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 12:00:02 by kimkwanho         #+#    #+#             */
/*   Updated: 2021/08/20 01:01:13 by kimkwanho        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef				SCAVTRAP_HPP
# define				SCAVTRAP_HPP

# include				<iostream>
# include				"ClapTrap.hpp"

class					ScavTrap:	virtual public ClapTrap
{
	public:
		ScavTrap(void);
		ScavTrap(std::string _nam);
		ScavTrap(const ScavTrap& _cpy);
		~ScavTrap(void);
		ScavTrap&		operator=(const ScavTrap& _cpy);
		void			GuardGate(void);
};

# endif