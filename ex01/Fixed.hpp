/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfernand <nfernand@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 11:15:59 by nfernand          #+#    #+#             */
/*   Updated: 2022/06/10 11:59:26 by nfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FIXED_HPP
# define FIXED_HPP

#include <iostream>

class	Fixed
{
	public:
		Fixed(void);
		Fixed(Fixed const &copy);
		Fixed(const int value); //converts int to fixed point value
		Fixed(const float value); //converts float to fixed point value
		~Fixed(void);

		Fixed	&operator=(Fixed const &copy);

		float	toFloat(void) const;
		int		toInt(void) const;

		int		getRawBits(void) const;
		void	setRawBits(int const raw);

	private:
		int					_fixed_point_value;
		static const int	_fractional_bits = 8;
};

std::ostream &operator<<(std::ostream &outStream, Fixed const &fixedClass);

#endif
