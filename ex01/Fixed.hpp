/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: yitoh <yitoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/23 14:23:08 by yitoh         #+#    #+#                 */
/*   Updated: 2024/05/26 13:34:07 by yitoh         ########   odam.nl         */
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
    Fixed(const Fixed& F);
    void operator=(const Fixed& F);
    ~Fixed();
    
    int getRawBits(void) const;
    void setRawBits(int const raw);

    Fixed(const int a);
    Fixed(const float f);

    float toFloat(void) const;
    int toInt(void) const;
};

std::ostream& operator<<(std::ostream& out, const Fixed& obj);


#endif