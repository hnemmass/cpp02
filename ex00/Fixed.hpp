/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnemmass <hnemmass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 13:06:49 by hnemmass          #+#    #+#             */
/*   Updated: 2025/11/30 13:35:12 by hnemmass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
	private:
		int					fixed_point;
		static const int	fractional_bits;
	
	public:
		Fixed();
		Fixed(const Fixed &old);
		Fixed &operator=(const Fixed &old);
		~Fixed();

		int	getRawBits(void) const;
		void setRawBits(int const raw);
};

#endif