/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimkwanho <kimkwanho@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 22:30:30 by kimkwanho         #+#    #+#             */
/*   Updated: 2021/09/14 17:19:56 by kimkwanho        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include				"Brain.hpp"

Brain::Brain()
{
	const				std::string idea[] = {
						"🥱",
						"🥵",
						"😢",
						"😱",
						"🥶",
						"🤯",
						"🤩",
						"🥰",
						"🥳",
						"🥴",
						"🤤",
						"🤢",
						"🤧",
						"🤮",
						"🤡",
						"🤠",
						"🤥",
						"🤤",};
	std::cout			<< ANSI_GRE << "[Brain] "
						<< ANSI_RES << "Default constructor" << std::endl;
	for (int _idx=0; _idx<100; ++_idx)
		this->idea[_idx] = idea[rand() % (sizeof(idea) / sizeof(std::string))];
}

Brain::~Brain()
{
	std::cout			<< ANSI_GRE << "[Brain] "
						<< ANSI_RES << "Default destructor" << std::endl;
}

Brain::Brain(const Brain &_cpy)
{
	std::cout			<< ANSI_GRE << "[Brain] "
						<< ANSI_RES << "Copy constructor" << std::endl;
	for (int _idx=0; _idx<100; _idx++)
		this->idea[_idx] = _cpy.idea[_idx];
}

Brain					&Brain::operator=(const Brain &_cpy)
{
	std::cout			<< ANSI_GRE << "[Brain] "
						<< ANSI_RES << "= assignment" << std::endl;
	for (int _idx=0; _idx<100; _idx++)
		this->idea[_idx] = _cpy.idea[_idx];
	return *this;
}

std::string				Brain::getIdea(int _idx)
{
	return	(this->idea[_idx]);
}
