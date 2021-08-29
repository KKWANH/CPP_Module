/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimkwanho <kimkwanho@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/29 07:35:40 by kimkwanho         #+#    #+#             */
/*   Updated: 2021/08/29 07:39:09 by kimkwanho        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include					"Ice.hpp"
#include					"Cure.hpp"
#include					"Character.hpp"
#include					"MateriaSource.hpp"

int							main(void)
{
	IMateriaSource*			_src = new MateriaSource();

	_src->learnMateria(new Ice());
	_src->learnMateria(new Cure());

	ICharacter*				__me = new Character("me");
	AMateria*				_tmp;

	_tmp = _src->createMateria("ice");
	__me->equip(_tmp);

	_tmp = _src->createMateria("cure");
	__me->equip(_tmp);

	ICharacter*				_bob = new Character("bob");

	__me->use(0, *_bob);
	__me->use(1, *_bob);
	__me->unequip(0);
	__me->use(0, *_bob);

	delete					_bob;
	delete					__me;
	delete					_src;

	system("leaks Interface");

	return					0;
}
