/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimkwanho <kimkwanho@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 15:43:08 by kimkwanho         #+#    #+#             */
/*   Updated: 2021/09/21 15:43:11 by kimkwanho        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"

void _test(std::string const &name_bure, int grade,
		   std::string const &name_form, int sign_grade, int exec_grade)
{
	try
	{
		std::cout << name_bure << "'s test" << std::endl;

		Bureaucrat bure(name_bure, grade);
		Form form(name_form, sign_grade, exec_grade);
		std::cout << bure << std::endl;
		bure.signForm(form);
		std::cout << form << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
		std::cout << std::endl;
	}
}

int main()
{
	std::cout << "<KAKAO TEST FORM>" << std::endl;
	_test("KKIM", 10, "KimKwanho", 100, 100);
	_test("Dopa", 100, "Pnpm", 10, 10);
	_test("Paka", 100, "Akaps", -10, 10);
	_test("Ralo", 100, "Greenday", 10, -10);
	_test("SipSub", 100, "요플래", 10, 999);
	_test("MonsterRat", 100, "MonsterRat", 999, 10);
	_test("불편하면", 999, "자세를고쳐앉아", 999, 999);
	_test("남탓할수도있지", -999, "우린남이니까", 999, 999);
	_test("에어맨이", 100, "쓰러지질않아", -999, -999);
	return 0;
}
