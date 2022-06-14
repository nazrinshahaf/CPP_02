/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfernand <nfernand@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 16:19:16 by nfernand          #+#    #+#             */
/*   Updated: 2022/06/14 16:40:30 by nfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

//class	Fixed;
#include "Fixed.hpp"

class	Point
{
	public:
		Point();
		Point(float x, float y);
		Point(Point const &tocopy);
		~Point();

		Point	&operator=(Point const &tocopy);

		Fixed	getX(void) const;
		Fixed	getY(void) const;

	private:
		Fixed	_x;
		Fixed	_y;
};

#endif
