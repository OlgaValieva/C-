/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carys <carys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 10:18:22 by carys             #+#    #+#             */
/*   Updated: 2022/11/08 13:18:07 by carys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#define CLR "\x1b[1;32m"
#define RST "\x1b[0m"

#include <iostream>
#include <algorithm>
#include <vector>
#include <deque>
#include <array>
#include <list>

template <typename T>
bool easyfind(T &cont, int toFind)
{
    typename  T::iterator it;
    it = std::find(cont.begin(), cont.end(), toFind);
    return (it == cont.end() ? false : true);
}

#endif