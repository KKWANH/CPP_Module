/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimkwanho <kimkwanho@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 10:27:34 by bkwag             #+#    #+#             */
/*   Updated: 2021/09/21 15:38:58 by kimkwanho        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include					"base.hpp"
# include					<random>

int							main(void)
{
	srand(time(NULL));

	for (int i = 0; i < 50; i++)
	{
		Base				*_bas = generate();
		std::cout			<< ANSI_GRE << "[Main]       "
							<< ANSI_RES << "Test Case : "
							<< ANSI_MAG << "[" << i << "] "
							<< ANSI_RES << std::endl;
		identify(_bas);
		identify(*_bas);
		std::cout			<< ANSI_RES << std::endl;
		delete				_bas;
	}
	return (0);
}