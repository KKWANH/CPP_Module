/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimkwanho <kimkwanho@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 10:27:34 by bkwag             #+#    #+#             */
/*   Updated: 2021/09/21 15:14:01 by kimkwanho        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include					"scalar.hpp"

int							main(int _arc, char *_arv[])
{
	if (_arc != 2)
	{
		std::cout			<< ANSI_RES << "You must include "
							<< ANSI_RED << "1 "
							<< ANSI_RES << "parameter. " << std::endl;
		std::cout			<< ANSI_RES << "Your parameter's count is "
							<< _arc - 1 << "!"
							<< std::endl;
	}
	else
	{
		Scalar				_scl(_arv[1]);
		_scl.PrintChar();
		_scl.PrintInt();
		_scl.PrintFloat();
		_scl.PrintDouble();
	}
	return					0;
}
