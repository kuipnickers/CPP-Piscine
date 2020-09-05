/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   easyfind.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nkuipers <nkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/04 17:30:24 by nkuipers      #+#    #+#                 */
/*   Updated: 2020/09/05 11:21:24 by nkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP
# include <list>
# include <iostream>
# include <algorithm>

template <typename T>
void    easyfind(T &container, int n)
{
    typename    T::const_iterator i;

    i = std::find(container.begin(), container.end(), n);
    std::cout << "Searching for number " << n << "..." << std::endl;
    if (i != container.end())
        std::cout << "Value was found in the container at memory address " << &i << "." << std::endl;
    else
        throw (std::string("Value was not found in container."));
}

#endif
