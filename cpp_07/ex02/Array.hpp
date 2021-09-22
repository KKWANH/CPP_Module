/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimkwanho <kimkwanho@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 14:27:04 by kimkwanho         #+#    #+#             */
/*   Updated: 2021/09/22 13:42:47 by kimkwanho        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef					ARRAY_HPP
# define					ARRAY_HPP

# include					<iostream>
# include					<exception>

# define					ANSI_RES	"\e[0;0m"
# define					ANSI_BOL	"\e[0;1m"
# define					ANSI_ITA	"\e[0;3m"
# define					ANSI_BLC	"\e[0;30m"
# define					ANSI_RED	"\e[0;31m"
# define					ANSI_GRE	"\e[0;32m"
# define					ANSI_YEL	"\e[0;33m"
# define					ANSI_BLU	"\e[0;34m"
# define					ANSI_MAG	"\e[0;35m"
# define					ANSI_CYA	"\e[0;36m"

template					<typename _typ>
class						Array
{
	private:
		_typ*				_arr;
		unsigned int		_siz;

	public:
		Array(void):
			_arr(new _typ[0]), _siz(0)
			{ };
		Array(unsigned int _num):
			_arr(new _typ[_num]), _siz(_num)
			{ };
		Array(const Array& _cpy)
			{
				this->_arr	= new _typ[_cpy.size()]();
				this->_siz	= _cpy.size();
				for (size_t _idx = 0; _idx < this->size(); _idx++)
					this->_arr[_idx] = _cpy._arr[_idx];
			};
		Array&				operator=(const Array& _cpy)
			{
				if (this->_arr)
					delete[] this->_arr;
				this->_arr	= new _typ[_cpy.size()]();
				this->_siz	= _cpy.size();
				for (size_t _idx = 0; _idx < this->size(); _idx++)
					this->_arr[_idx] = _cpy._arr[_idx];
				return		*this;
			};
		_typ&				operator[](unsigned int _idx)
			{
				if (this->_siz <= _idx)
					throw		std::exception();
				return			this->_arr[_idx];
			};
		size_t				size(void) const
			{
				return		this->_siz;
			}		
};

# endif