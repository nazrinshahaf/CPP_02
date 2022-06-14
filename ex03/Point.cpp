/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfernand <nfernand@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 16:19:13 by nfernand          #+#    #+#             */
/*   Updated: 2022/06/14 17:14:59 by nfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <iostream>

#include "Point.hpp"

#include "colours.h"

using	std::cout;
using	std::endl;

Point::Point()
{
	//cout << GREEN "Point Default Constructor called" RESET << endl;
	this->_x = 0;
	this->_y = 0;
}

Point::Point(float x, float y)
{
	//cout << GREEN "Point Assignment Constructor called" RESET << endl;
	this->_x = Fixed(x);
	this->_y = Fixed(y);
}

Point::~Point()
{
	//cout << RED "Point Destructor called" RESET << endl;
}

Point::Point(Point const &tocopy)
{
	//cout << GREEN "Point Copy Constructor called" RESET << endl;
	this->_x = tocopy.getX();
	this->_y = tocopy.getY();
}

Point	&Point::operator=(Point const &tocopy)
{
	//cout << GREEN "Point Assignment Operator called" RESET << endl;
	this->_x = tocopy.getX();
	this->_y = tocopy.getY();
	return (*this);
}

Fixed	Point::getX(void) const 
{
	return (this->_x);
}

Fixed	Point::getY(void) const 
{
	return (this->_y);
}
