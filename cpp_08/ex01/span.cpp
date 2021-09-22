/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimkwanho <kimkwanho@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 00:58:19 by kimkwanho         #+#    #+#             */
/*   Updated: 2021/09/23 01:49:50 by kimkwanho        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include					"span.hpp"
# include					<random>
# include					<limits>

Span::Span(void)
{
	this->_len = 0;
	this->_cnt = 0;
	this->_arr.resize(0);
}

Span::Span(unsigned int _cnt)
{
	this->_len				= _cnt;
	this->_cnt				= 0;
	this->_arr.resize(_cnt);
}

Span::Span(const Span& _cpy)
{
	*this					= _cpy;
}

Span::~Span(void)
{
}

Span&						Span::operator=(const Span& _cpy)
{
	this->_len				= _cpy._len;
	this->_cnt				= _cpy._cnt;
	this->_arr				= _cpy._arr;
	return					*this;
}

void						Span::addNumber(int _num)
{
	if (this->_cnt >= this->_len)
		throw				MemoryException();
	this->_arr.push_back(_num);
	++this->_cnt;
}

void						Span::addNumber(unsigned int _nm1, unsigned int _nm2)
{
	std::vector<int>::iterator
							_stt = this->_arr.begin() + _nm1;
	std::vector<int>::iterator
							_end = this->_arr.begin() + _nm2;

	if (_nm1 > _nm2 || _stt >= this->_arr.end() || _end >= this->_arr.end())
		throw				MemoryException();
	for (std::vector<int>::iterator _itr = _stt; _itr <= _end; _itr++)
	{
		*_itr				= rand() % 1000000;
		++this->_cnt;
	}
}

void						Span::sort(void)
{
	for (int _idx = 0; _idx < this->_cnt - 1; _idx++)
	{
		int 				_min = _idx;
		for (int _jdx = _idx + 1; _jdx < this->_cnt; _jdx++)
			if (this->_arr[_jdx] < this->_arr[_min])
				_min = _jdx;
		if (_idx != _min)
		{
			int				_tmp = this->_arr[_idx];
			this->_arr[_idx]= this->_arr[_min];
			this->_arr[_min]= _tmp;
		}
	}
}

int							Span::shortestSpan(void)
{
	int						_spn = INT_MAX;
	if (this->_cnt <= 1)
		throw				ArrayLackException();
	this->sort();
	for (int _idx = 0; _idx < this->_cnt - 1; _idx++)
		if (this->_arr[_idx + 1] - this->_arr[_idx] < _spn)
			_spn			= this->_arr[_idx + 1] - this->_arr[_idx];
	return					_spn;
}

int							Span::longestSpan(void)
{
	if (this->_cnt <= 1)
		throw				ArrayLackException();
	return					*std::max_element(this->_arr.begin(), this->_arr.end()) - *std::min_element(this->_arr.begin(), this->_arr.end());
}

std::vector<int>			Span::getArr()
{
	return					this->_arr;
}