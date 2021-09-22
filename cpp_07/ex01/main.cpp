/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimkwanho <kimkwanho@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 10:27:34 by bkwag             #+#    #+#             */
/*   Updated: 2021/09/22 13:10:48 by kimkwanho        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include					"iter.hpp"

template					<typename _typ>
void						_function_print(const _typ& _arr)
{
	std::cout				<< ANSI_GRE << "[PRINT] "
							<< ANSI_RES << _arr << std::endl;
}

int							main(void)
{
	std::cout				<< std::endl;

	int						_ar1[] = {1, 2, 3, 4, 5, 42, 84, 420, 840, -42};
	std::string				_ar2[] = {"paka", "ralo", "yoplait", "dopa"};

	std::cout				<< ANSI_BLC << "----------------------------------------------" << std::endl;
	iter(_ar1, 10, _function_print);
	std::cout				<< ANSI_BLC << "----------------------------------------------" << std::endl;
	iter(_ar1, 5, _function_print);
	std::cout				<< ANSI_BLC << "----------------------------------------------" << std::endl;
	iter(_ar2, 4, _function_print);
	std::cout				<< ANSI_BLC << "----------------------------------------------" << std::endl;
	iter(_ar2, 2, _function_print);
	std::cout				<< ANSI_BLC << "----------------------------------------------" << std::endl;
	iter(_ar1, 15, _function_print);
	std::cout				<< ANSI_BLC << "----------------------------------------------" << std::endl;
}
