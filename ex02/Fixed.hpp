/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfernand <nfernand@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 11:15:59 by nfernand          #+#    #+#             */
/*   Updated: 2022/05/04 11:07:37 by nfernand         ###   ########.fr       */
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
		bool	operator==(Fixed const &val) const;
		bool	operator!=(Fixed const &val) const;
		bool	operator>(const Fixed &val) const;
		bool	operator>=(Fixed &val);
		bool	operator<(const Fixed &val) const;
		bool	operator<=(Fixed &val);

		Fixed	&operator++(); //Prefix
		Fixed	operator++(int); //Postfix
		Fixed	&operator--();
		Fixed	operator--(int);

		Fixed	operator+(Fixed const &val);
		Fixed	operator-(Fixed const &val);
		Fixed	operator*(Fixed const &val);
		Fixed	operator/(Fixed const &val);

		float	toFloat(void) const;
		int		toInt(void) const;

		int		getRawBits(void) const;
		void	setRawBits(int const raw);

		static Fixed	&min(Fixed &val1, Fixed &val2);
		static const Fixed	&min(const Fixed &val1, const Fixed &val2);
		static Fixed	&max(Fixed &val1, Fixed &val2);
		static const Fixed	&max(const Fixed &val1, const Fixed &val2);

	private:
		int					_fixed_point_value;
		static const int	_fractional_bits = 8;
};

std::ostream &operator<<(std::ostream &outStream, Fixed const &fixedClass);

#endif
