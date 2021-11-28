/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daekim <daekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 18:34:23 by daekim            #+#    #+#             */
/*   Updated: 2021/11/24 18:34:24 by daekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	private:
		int point_value;
		static const int frac_bits = 8;

	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed &src);
		Fixed(const int num);
		Fixed(const float num);
		Fixed & operator=(const Fixed &src);
		int getRawBits(void) const;
		void setRawBits(int const raw);
		int toInt(void) const;
		float toFloat(void) const;
};

std::ostream & operator<<(std::ostream& os, const Fixed &src);

#endif
