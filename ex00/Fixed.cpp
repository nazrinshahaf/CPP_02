/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfernand <nfernand@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 11:16:22 by nfernand          #+#    #+#             */
/*   Updated: 2022/03/21 13:33:47 by nfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

using std::cout;
using std::endl;

Fixed::Fixed(void)
{
	cout << "Fixed defualt constructor called" << endl;
	this->_fixed_point_value = 0;
}

Fixed::Fixed(Fixed const &copy)
{
	cout << "Fixed copy constructor called" << endl;
	*this = copy;
}

Fixed	&Fixed::operator=(Fixed const &copy)
{
	cout << "Fixed copy assignment operator called" << endl;
	if (this != &copy)
		this->_fixed_point_value = copy.getRawBits();
	return *this;
}

Fixed::~Fixed(void)
{
	cout << "Fixed destructor called" << endl;
}

int		Fixed::getRawBits(void) const
{
	cout << "getRawBits member function called" << endl;
	return (this->_fixed_point_value);
}

void	Fixed::setRawBits(int const raw)
{
	cout << "setRawBits member function called" << endl;
	this->_fixed_point_value = raw;
}
