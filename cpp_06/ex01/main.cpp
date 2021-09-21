/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimkwanho <kimkwanho@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 10:27:34 by bkwag             #+#    #+#             */
/*   Updated: 2021/09/21 17:16:35 by kimkwanho        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include					"data.hpp"

int							main(void)
{
	Data					_dat("a", "b", 1);

	uintptr_t				_isr = serialize(&_dat);
	Data*					_dsr = deserialize(_isr);

	std::cout				<< ANSI_GRE << "[Main] "
							<< ANSI_YEL << "Original version of source Data"
							<< ANSI_RES << "'s Value! (a, b, 1)" << std::endl
							<< ANSI_CYA << "       _st1"
							<< ANSI_RES << " (must be 'a') : '" << _dat.getArg_st1() << "'" << std::endl
							<< ANSI_CYA << "       _st2"
							<< ANSI_RES << " (must be 'b') : '" << _dat.getArg_st2() << "'" << std::endl
							<< ANSI_CYA << "       _num"
							<< ANSI_RES << " (must be '1') : '" << _dat.getArg_num() << "'" << std::endl;

	std::cout				<< ANSI_GRE << "[Main] "
							<< ANSI_YEL << "Deserialized version of source Data"
							<< ANSI_RES << "'s Value! (a, b, 1)" << std::endl
							<< ANSI_CYA << "       _st1"
							<< ANSI_RES << " (must be 'a') : '" << _dsr->getArg_st1() << "'" << std::endl
							<< ANSI_CYA << "       _st2"
							<< ANSI_RES << " (must be 'b') : '" << _dsr->getArg_st2() << "'" << std::endl
							<< ANSI_CYA << "       _num"
							<< ANSI_RES << " (must be '1') : '" << _dsr->getArg_num() << "'" << std::endl;

	return (0);
}
