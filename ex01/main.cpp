/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfernand <nfernand@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 11:15:49 by nfernand          #+#    #+#             */
/*   Updated: 2022/03/21 15:22:22 by nfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

using std::cout;
using std::endl;

int	main()
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

	return (0);
}
