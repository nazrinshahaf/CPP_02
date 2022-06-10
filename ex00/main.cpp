/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfernand <nfernand@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 11:15:49 by nfernand          #+#    #+#             */
/*   Updated: 2022/06/10 11:46:43 by nfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Fixed.hpp"

#include "colours.h"

using std::cout;
using std::endl;

int	main()
{
	cout << CYAN "[Testing PDF main...]" RESET << endl;
	{
		Fixed	a;
		Fixed	b(a);
		Fixed	c;

		c = b;

		cout << a.getRawBits() << endl;
		cout << b.getRawBits() << endl;
		cout << c.getRawBits() << endl;
	}
	cout << endl;
	
	cout << CYAN "[Testing Copy Constructor...]" RESET << endl;
	{
		Fixed	to_be_copied;

		cout << endl;
		cout << "to_be_copied raw bits: " BLUE "<" << to_be_copied.getRawBits() << ">" RESET << endl;
		cout << MAGENTA "Changing Raw bits..." RESET << endl;
		to_be_copied.setRawBits(10);
		cout << "to_be_copied raw bits: " BLUE "<" << to_be_copied.getRawBits() << ">" RESET << endl;

		cout << MAGENTA "Calling copy constructor..." RESET << endl;
		Fixed	to_be_set = to_be_copied;

		cout << endl;
		cout << "to_be_set raw bits: " BLUE "<" << to_be_copied.getRawBits() << ">" RESET << endl;
	}
	cout << endl;

	cout << CYAN "[Testing Copy Assignment Operators...]" RESET << endl;
	{
		Fixed	to_be_copied;
		Fixed	to_be_set;

		cout << endl;
		cout << "to_be_copied raw bits: " BLUE "<" << to_be_copied.getRawBits() << ">" RESET << endl;
		cout << MAGENTA "Changing Raw bits..." RESET << endl;
		to_be_copied.setRawBits(10);
		cout << "to_be_copied raw bits: " BLUE "<" << to_be_copied.getRawBits() << ">" RESET << endl;
		cout << endl;

		cout << endl;
		cout << "to_be_set raw bits: " BLUE "<" << to_be_set.getRawBits() << ">" RESET << endl;
		cout << MAGENTA "Changing Raw bits..." RESET << endl;
		to_be_set.setRawBits(30);
		cout << "to_be_set raw bits: " BLUE "<" << to_be_set.getRawBits() << ">" RESET << endl;
		cout << endl;

		cout << MAGENTA "Calling copy assignment operator..." RESET << endl;
		to_be_set = to_be_copied;
		cout << endl;

		cout << "to_be_copied raw bits: " BLUE "<" << to_be_copied.getRawBits() << ">" RESET << endl;
		cout << "to_be_set raw bits: " BLUE "<" << to_be_set.getRawBits() << ">" RESET << endl;

	}
	return (0);
}
