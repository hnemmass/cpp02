/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnemmass <hnemmass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 13:06:49 by hnemmass          #+#    #+#             */
/*   Updated: 2025/11/03 14:41:55 by hnemmass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int					fixed_point;
		static const int	fractional_bits;
	
	public:
		Fixed();
		Fixed(const Fixed &old);
		Fixed(const int number);
		Fixed(const float number);
		Fixed &operator=(const Fixed &old);
		~Fixed();
		float toFloat(void) const;
		int toInt(void) const;
		int	getRawBits(void) const;
		void setRawBits(int const raw);
};

	std::ostream &operator<<(std::ostream &out, const Fixed &f);

#endif