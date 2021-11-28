/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daekim <daekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 18:34:05 by daekim            #+#    #+#             */
/*   Updated: 2021/11/24 18:34:07 by daekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
	private:
		int point_value;
		static const int frac_bits = 8;
		
	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed &src);
		Fixed & operator=(const Fixed &src);
		int getRawBits( void ) const;
		void setRawBits( int const raw );
};

#endif
