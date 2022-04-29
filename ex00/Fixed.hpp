/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfernand <nfernand@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 11:15:59 by nfernand          #+#    #+#             */
/*   Updated: 2022/03/21 12:25:02 by nfernand         ###   ########.fr       */
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
		~Fixed(void);
		Fixed	&operator=(Fixed const &copy);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);

	private:
		int					_fixed_point_value;
		static const int	_fractional_bits = 8;
};

#endif
