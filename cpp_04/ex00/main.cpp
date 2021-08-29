/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimkwanho <kimkwanho@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 22:11:41 by kimkwanho         #+#    #+#             */
/*   Updated: 2021/08/25 22:12:12 by kimkwanho        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include		"Dog.hpp"
# include		"Cat.hpp"
# include		"WrongCat.hpp"

int				main(void)
{
	const Animal *meta = new Animal();
	const Animal *j = new Dog();
	const Animal *i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	j->makeSound();
	i->makeSound();
	meta->makeSound();

	const WrongAnimal *k = new WrongCat(); //이 경우 오버라이드가 안되고 WrongAnimal의 울음이 발생한다.
	k->makeSound();
	const WrongCat *q = new WrongCat(); //이 경우에는 WrongCat의 울음이 나온다.
	q->makeSound();
	delete meta;
	delete i;
	delete j;
	delete k;
	delete q;
	return 0;
}
