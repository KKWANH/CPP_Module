/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimkwanho <kimkwanho@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 10:27:34 by bkwag             #+#    #+#             */
/*   Updated: 2021/09/22 15:41:22 by kimkwanho        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include					"whatever.hpp"

template					<typename _typ>
void						_test_swap(std::string _nam, int _num, _typ _ar1, _typ _ar2)
{
	std::cout				<< ANSI_GRE << "[Main] "
							<< ANSI_YEL << "[Swap " << _num << "]  [" << _nam << "]    "
							<< ANSI_RES << std::endl
							<< ANSI_CYA << "        [Before] "
							<< ANSI_RES << "[" << _ar1 << "," << _ar2 << "]"
							<< ANSI_RES << std::endl;
	swap(_ar1, _ar2);
	std::cout				<< ANSI_CYA << "        [After]  "
							<< ANSI_RES << "[" << _ar1 << "," << _ar2 << "]"
							<< ANSI_RES << std::endl << std::endl;
}

template					<typename _typ>
void						_test_min(std::string _nam, int _num, _typ _ar1, _typ _ar2)
{
	_typ					_rst = 0;

	std::cout				<< ANSI_GRE << "[Main] "
							<< ANSI_YEL << "[Min  " << _num << "]  [" << _nam << "]    "
							<< ANSI_RES << std::endl
							<< ANSI_CYA << "       [Compare] "
							<< ANSI_RES << "[" << _ar1 << "," << _ar2 << "]"
							<< ANSI_RES << std::endl;
	_rst					= min(_ar1, _ar2);
	std::cout				<< ANSI_CYA << "       [Result]  "
							<< ANSI_RES << "[" << _rst << "]"
							<< ANSI_RES << std::endl << std::endl;
}

template					<typename _typ>
void						_test_max(std::string _nam, int _num, _typ _ar1, _typ _ar2)
{
	_typ					_rst = 0;

	std::cout				<< ANSI_GRE << "[Main] "
							<< ANSI_YEL << "[Max  " << _num << "]  [" << _nam << "]    "
							<< ANSI_RES << std::endl
							<< ANSI_CYA << "       [Compare] "
							<< ANSI_RES << "[" << _ar1 << "," << _ar2 << "]"
							<< ANSI_RES << std::endl;
	_rst					= max(_ar1, _ar2);
	std::cout				<< ANSI_CYA << "       [Result]  "
							<< ANSI_RES << "[" << _rst << "]"
							<< ANSI_RES << std::endl << std::endl;
}

int							main(void)
{
	std::cout				<< std::endl;
	int						_nm1 = 42;
	int						_nm2 = 24;
	char					_ch1 = 'f';
	char					_ch2 = 't';
	std::string				_st1 = "string case 1";
	std::string				_st2 = "string case 2";

	_test_swap("int",    0, _nm1, _nm2);
	_test_swap("char",   1, _ch1, _ch2);
	_test_swap("string", 2, _st1, _st2);
	std::cout				<< std::endl;
	_test_min( "int",    0, _nm1, _nm2);
	_test_min( "char",   1, _ch1, _ch2);
	// _test_min( "string", 2, _st1, _st2);
	std::cout				<< std::endl;
	_test_max( "int",    0, _nm1, _nm2);
	_test_max( "char",   1, _ch1, _ch2);
	// _test_max( "string", 2, _st1, _st2);


	// int a = 2;
	// int b = 3;
	// ::swap( a, b );
	// std::cout << "a = " << a << ", b = " << b << std::endl;
	// std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	// std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	// std::string c = "chaine1";
	// std::string d = "chaine2";
	// ::swap(c, d);
	// std::cout << "c = " << c << ", d = " << d << std::endl;
	// std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	// std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	// return 0;
}
