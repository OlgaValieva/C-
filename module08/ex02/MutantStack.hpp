/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carys <carys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:46:45 by carys             #+#    #+#             */
/*   Updated: 2022/11/08 15:06:15 by carys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#define CLR "\x1b[1;32m"
#define RST "\x1b[0m"
#define BRN "\x1b[0;31m"

#include <iostream>
#include <algorithm>
#include <stack>

template <class T, class Container = std::deque<T> >

class MutantStack : public std::stack <T, Container>
{
    public:
        typedef typename Container::iterator iterator;
        typedef typename Container::const_iterator const_iterator;
        
        MutantStack() {}
        MutantStack(const MutantStack<T> &mutant) { *this = mutant;}
        MutantStack &operator=(const MutantStack &mutant)
		{
			if (this == &mutant)
				return (*this);
			this->conteiner = mutant.conteiner;
			return (*this);
		}
		~MutantStack() {}
		iterator begin(){ return (conteiner.begin()); }
        iterator end(){ return (conteiner.end());}
        void push(T p){ conteiner.push_back(p);}
        void pop(){ conteiner.pop_back();}
        T &top(){ return (conteiner.back());}
        bool empty(){ return (conteiner.empty());}
		size_t size(){ return (conteiner.size());}
    protected:
        Container conteiner;
};

#endif