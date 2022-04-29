/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfernand <nfernand@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 11:16:22 by nfernand          #+#    #+#             */
/*   Updated: 2022/03/21 15:21:17 by nfernand         ###   ########.fr       */
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

Fixed::Fixed(const int ivalue)
{
	cout << "Fixed int constructor called" << endl;
	this->_fixed_point_value = ivalue << this->_fractional_bits;
}

Fixed::Fixed(const float fvalue)
{
	cout << "Fixed float constructor called" << endl;
	//formula : fixed point value = floor(float * 2^n)
	//If i dont use power function i have to use (2 << (n -1))
	this->_fixed_point_value = roundf(fvalue * (2 << (this->_fractional_bits - 1)));
}

Fixed	&Fixed::operator=(Fixed const &copy)
{
	cout << "Fixed copy assignment operator called" << endl;
	if (this != &copy)
		this->_fixed_point_value = copy.getRawBits();
	return *this;
}

int		Fixed::toInt(void) const
{
	return (this->_fixed_point_value >> this->_fractional_bits);
}

float	Fixed::toFloat(void) const
{
	//can also multiply 1.0 or 1.0f to force float conversion
	return ((float)this->_fixed_point_value / (2 << (this->_fractional_bits - 1)));
}

Fixed::~Fixed(void)
{
	cout << "Fixed destructor called" << endl;
}

int		Fixed::getRawBits(void) const
{
	return (this->_fixed_point_value);
}

void	Fixed::setRawBits(int const raw)
{
	this->_fixed_point_value = raw;
}

std::ostream &operator<<(std::ostream &outStream, Fixed const &fixedClass)
{
	outStream << fixedClass.toFloat();
	return outStream;
}
