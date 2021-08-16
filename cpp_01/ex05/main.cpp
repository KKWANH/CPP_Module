/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimkwanho <kimkwanho@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 11:17:37 by kimkwanho         #+#    #+#             */
/*   Updated: 2021/08/16 13:06:45 by kimkwanho        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include			"Karen.hpp"

int					main(void)
{
	Karen			_krn;

	_krn.complain("INFO");
	_krn.complain("DEBUG");
	_krn.complain("WARNING");
	_krn.complain("ERROR");
	_krn.complain("NOT_EXIST");

	return			(0);
}