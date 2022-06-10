/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfernand <nfernand@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 11:16:22 by nfernand          #+#    #+#             */
/*   Updated: 2022/06/10 11:51:27 by nfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Fixed.hpp"

#include "colours.h"

using std::cout;
using std::endl;

Fixed::Fixed(void)
{
	cout << GREEN "Fixed defualt constructor called" RESET << endl;
	this->_fixed_point_value = 0;
}

Fixed::Fixed(Fixed const &copy)
{
	cout << GREEN "Fixed copy constructor called" RESET << endl;
	*this = copy;
}

Fixed	&Fixed::operator=(Fixed const &copy)
{
	cout << GREEN "Fixed copy assignment operator called" RESET << endl;
	this->_fixed_point_value = copy.getRawBits();
	return (*this);
}

Fixed::~Fixed(void)
{
	cout << RED "Fixed destructor called" RESET << endl;
}

int		Fixed::getRawBits(void) const
{
	if (this->_print_init)
		cout << BLUE "getRawBits member function called" RESET << endl;
	return (this->_fixed_point_value);
}

void	Fixed::setRawBits(int const raw)
{
	if (this->_print_init)
		cout << BLUE "setRawBits member function called" RESET << endl;
	this->_fixed_point_value = raw;
}
