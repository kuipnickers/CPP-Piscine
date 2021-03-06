/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ISquad.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nkuipers <nkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/20 14:34:08 by nkuipers      #+#    #+#                 */
/*   Updated: 2020/08/21 10:16:39 by nkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISQUAD_HPP
# define ISQUAD_HPP
# include <iostream>
# include "ISpaceMarine.hpp"

class ISquad
{
    public:
        virtual ~ISquad() {}
        virtual int             getCount() const = 0;
        virtual ISpaceMarine    *getUnit(int n) const = 0;
        virtual int             push(ISpaceMarine *marine) = 0;
};

#endif
