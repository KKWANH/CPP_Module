/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimkwanho <kimkwanho@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 05:30:25 by kimkwanho         #+#    #+#             */
/*   Updated: 2021/09/23 05:40:46 by kimkwanho        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include					"mutantstack.hpp"

int							main(void)
{
	MutantStack<int>		_mst;

	_mst.push(42);
	_mst.push(21);
	std::cout				<< ANSI_GRE << "[Main] "
							<< ANSI_YEL << "[MutantStack] [int] "
							<< ANSI_RES << _mst.top() << std::endl;

	_mst.pop();
	std::cout				<< ANSI_GRE << "[Main] "
							<< ANSI_YEL << "[MutantStack] [int] "
							<< ANSI_RES << _mst.size() << std::endl;

	_mst.push(10);
	_mst.push(5);
	_mst.push(2);
	_mst.push(0);
	
	std::cout				<< "-------------------------" << std::endl;

	MutantStack<int>::iterator
							_itb = _mst.begin();
	MutantStack<int>::iterator
							_ite = _mst.end();
	
	++_itb;
	--_itb;
	while (_itb != _ite)
	{
		std::cout			<< ANSI_GRE << "[Main] "
							<< ANSI_YEL << "[MutantStack] [itr] "
							<< ANSI_RES << *_itb << std::endl;
		++_itb;
	}
	std::stack<int>			s(_mst);
	return					0;
}