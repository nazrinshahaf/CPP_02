/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfernand <nfernand@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 11:15:49 by nfernand          #+#    #+#             */
/*   Updated: 2022/06/10 16:15:36 by nfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>

#include "Fixed.hpp"

#include "colours.h"

using std::cout;
using std::endl;

int	main()
{
	cout << CYAN "[Representing 32 and 42.2f in fpv]" RESET << endl;
	{
		Fixed	a(32);

		cout << endl;
		cout << MAGENTA "32 fpv conversion..." RESET << endl;
		cout << "a << 8	or a * (2^8)		= " BLUE "<" << (pow(2,8)) * a.toInt() << ">" RESET << endl;
		cout << "a fpv representation 		= " BLUE "<" << a.getRawBits() << ">" RESET << endl;
		cout << "a integer representation 	= " BLUE "<" << a << ">" RESET << endl;
		cout << endl;

		Fixed	b(42.2f);
		cout << endl;
		cout << MAGENTA "42.2 fpv conversion..." RESET << endl;
		cout << "floor(float * 2^8) or floor(float * (2 << (8 - 1)))		= " BLUE "<" << floor(42.2 * pow(2,8)) << ">" RESET << endl;
		cout << "b fpv representation 						= " BLUE "<" << b.getRawBits() << ">" RESET << endl;
		cout << "b float representation 						= " BLUE "<" << b << ">" RESET << endl;
		cout << "precesion lost		 					= " BLUE "<0.0008>" RESET << endl;
		cout << endl;
	}
	cout << endl;

	cout << CYAN "[Print PDF main]" RESET << endl;
	{
		Fixed	a;
		Fixed 	const b(10);
		Fixed	const c(42.2f);
		Fixed	const d(b);

		a = Fixed(1234.4321f);

		cout << endl;

		cout << "a is " << a << endl;
		cout << "b is " << b << endl;
		cout << "c is " << c << endl;
		cout << "d is " << d << endl << endl;

		cout << "a is " << a.toInt() << " as integer" << endl;
		cout << "b is " << b.toInt() << " as integer" << endl;
		cout << "c is " << c.toInt() << " as integer" << endl;
		cout << "d is " << d.toInt() << " as integer" << endl << endl;
	}
	return (0);
}
