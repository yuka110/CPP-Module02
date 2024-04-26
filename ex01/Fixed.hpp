/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: yitoh <yitoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/23 14:23:08 by yitoh         #+#    #+#                 */
/*   Updated: 2024/04/26 16:07:30 by yitoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <string>
#include <iostream>
#include <cmath>


class Fixed
{
private:
    int _x;
    static const int _y = 8;
    
public:
    Fixed();
    Fixed(const int a);
    Fixed(const float f);
    Fixed(const Fixed& F);
    ~Fixed();
    int getRawBits(void) const;
    void setRawBits(int const raw);
    float toFloat(void) const;
    int toInt(void) const;
    void operator=(const Fixed& F);
};

std::ostream& operator<<(std::ostream& out, const Fixed& obj);


#endif