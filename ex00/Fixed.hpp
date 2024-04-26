/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: yitoh <yitoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/23 14:23:08 by yitoh         #+#    #+#                 */
/*   Updated: 2024/04/26 15:31:42 by yitoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <string>
#include <iostream>

class Fixed
{
private:
    int _x;
    static const int _y = 8;
    
public:
    Fixed();
    Fixed(Fixed& F);
    ~Fixed();
    void operator=(Fixed& F);

    int getRawBits(void) const;
    void setRawBits(int const raw);
};



#endif