/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfernand <nfernand@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 11:15:49 by nfernand          #+#    #+#             */
/*   Updated: 2022/04/29 15:24:31 by nfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

using std::cout;
using std::endl;

int	main()
{
	Fixed	a(0);
	//Fixed 	const b(10);

	cout << endl;
	cout << "a is " << a << endl;
	cout << "a is " << ++a << endl;
	cout << "a is " << a << endl;
	cout << "a is " << a++ << endl;
	cout << "a is " << a << endl << endl;

	Fixed b(Fixed(5.05f) * Fixed(2));

	cout << "b is " << b << endl << endl;
	cout << "b is " << b / 2 << endl << endl;

	Fixed c(Fixed(10.1f) / Fixed(2));

	cout << "c is " << c << endl << endl;

	Fixed d(10.2f);
	Fixed e(10.2f);

	cout << "d is " << d << endl;
	cout << "e is " << e << endl;
	cout << "d is " << d + e << endl;
	cout << "d is " << d << endl;
	cout << "e is " << e << endl;
	cout << "d is " << d - e << endl;
	cout << "d is " << d << endl << endl;

	Fixed f(1);
	Fixed g(2);
	Fixed h(1);

	cout << "f is " << f << endl;
	cout << "g is " << g << endl;
	cout << "h is " << h << endl << endl;

	cout << "== operator" << endl;
	cout << "f is ";
	if (f == g)
		cout << "equal ";
	else
		cout << "not equal ";
	cout << "to g" << endl;

	cout << "f is ";
	if (f == h)
		cout << "equal ";
	else
		cout << "not equal ";
	cout << "to h" << endl;
	cout << "== operator" << endl << endl;

	cout << "!= operator" << endl;
	cout << "f is ";
	if (f != g)
		cout << "equal ";
	else
		cout << "not equal ";
	cout << "to g" << endl;

	cout << "f is ";
	if (f != h)
		cout << "equal ";
	else
		cout << "not equal ";
	cout << "to h" << endl;
	cout << "!= operator" << endl << endl;

	cout << "< operator" << endl;
	cout << "f is ";
	if (f < g)
		cout << "less then ";
	else
		cout << "not less then ";
	cout << "g" << endl;

	cout << "f is ";
	if (f < h)
		cout << "less then ";
	else
		cout << "not less then ";
	cout << "h" << endl;

	cout << "g is ";
	if (g < h)
		cout << "less then ";
	else
		cout << "not less then ";
	cout << "h" << endl;
	cout << "< operator" << endl << endl;

	cout << "> operator" << endl;
	cout << "f is ";
	if (f > g)
		cout << "more then ";
	else
		cout << "not more then ";
	cout << "g" << endl;

	cout << "f is ";
	if (f > h)
		cout << "more then ";
	else
		cout << "not more then ";
	cout << "h" << endl;

	cout << "g is ";
	if (g > h)
		cout << "more then ";
	else
		cout << "not more then ";
	cout << "h" << endl;
	cout << "> operator" << endl << endl;
//	Fixed	b(10.1f);
//
//	cout << endl;
//	cout << "b is " << b << endl;
//	cout << "b is " << --b << endl;
//	cout << "b is " << b << endl;
//	cout << "b is " << b-- << endl;
//	cout << "b is " << b << endl << endl;
//

	//cout << "a is " << a.toInt() << " as integer" << endl;
	//cout << "b is " << b.toInt() << " as integer" << endl;
	//cout << "c is " << c.toInt() << " as integer" << endl;
	//cout << "d is " << d.toInt() << " as integer" << endl << endl;

	return (0);
}
