/* ************************************************************************** */
/*																			  */
/*														  :::	   ::::::::   */
/*	 main.cpp											:+:		 :+:	:+:   */
/*													  +:+ +:+		  +:+	  */
/*	 By: nfernand <nfernand@student.42kl.edu.m		+#+  +:+	   +#+		  */
/*												  +#+#+#+#+#+	+#+			  */
/*	 Created: 2022/03/21 11:15:49 by nfernand		   #+#	  #+#			  */
/*	 Updated: 2022/06/14 17:22:24 by nfernand		  ###	########.fr		  */
/*																			  */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"
#include <iostream>
#include <cmath>

using std::cout;
using std::endl;

Fixed	sign(Point p1, Point p2, Point p3)
{
	return (p1.getX() - p3.getX()) * (p2.getY() - p3.getY()) - (p2.getX() - p3.getX()) * (p1.getY() - p3.getY());
}

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed	d1, d2, d3;
	bool	has_neg, has_pos;

	d1 = sign(point, a, b);
	d2 = sign(point, b, c);
	d3 = sign(point, c, a);

	has_neg = (d1 < 0) || (d2 < 0) || (d3 < 0);
	has_pos = (d1 > 0) || (d2 > 0) || (d3 > 0);

	return !(has_neg && has_pos);
}

int	main()
{
	Point	a(0,0);
	Point	b(32,32);
	Point	c(-31, -32);
	Point	point(11,11);
	cout << bsp(a, b, c, point) << endl;
	return 0;
}
