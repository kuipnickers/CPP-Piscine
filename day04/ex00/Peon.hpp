/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Peon.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nkuipers <nkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/20 10:43:08 by nkuipers      #+#    #+#                 */
/*   Updated: 2020/08/26 13:40:36 by nkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP
# include <iostream>
# include "Victim.hpp"

class Peon : public Victim
{
    public:
        Peon();
        virtual ~Peon();
        Peon(std::string name);
        Peon(const Peon & copy);
        Peon &          operator=(Peon const &rhs);
        void            getPolymorphed() const;
    private:
        std::string _name;
};

#endif
