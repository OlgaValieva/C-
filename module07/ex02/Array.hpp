/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carys <carys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 17:07:22 by carys             #+#    #+#             */
/*   Updated: 2022/11/06 20:50:05 by carys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <exception>
#include <cstring>

template <typename T>
class Array
{
    public:
        Array() : arr(nullptr), n(0), siz(0) {};

        Array(unsigned int n) : siz(n)
        {
//            std::cout << "Constructor" << std::endl;
			if (siz < 0)
				throw (IndexOutOfBounds());
            this->n = n;
            if (n == 0)
                arr = nullptr;
            else
                arr = new T[n];
        };

        Array(const Array &x)
        {
 //           std::cout << "Constructor copy" << std::endl;
            this->arr = new T[x.n];
            n = x.n;
			siz = x.siz;
            for (unsigned int i = 0; i < n; i++)
                arr[i] = x.arr[i];
        };

        Array &operator=(const Array &x)
        {
//            std::cout << "Assigment" << std::endl;
            if (this == &x)
                return (*this);
            if (arr)
				delete[] arr;
            n = x.n;
			siz = x.siz;
			this->arr = new T[n];
			for (unsigned int i = 0; i < n; i++)
				arr[i] = x.arr[i];
            return (*this);
        };

        ~Array()
        {
//            std::cout << "Destructor" << std::endl;
            if (arr)
                delete [] arr;
        };

        int size()
        {
            return (n);
        }

        class IndexOutOfBounds : public std::exception
        {
            public:
                const char *what() const throw()
                {
                    return ("Index out of bounds!");
                }
        };

        T &operator[](unsigned int index)
        {
                if (index >= n || index < 0 || arr == nullptr)
                    throw (IndexOutOfBounds());
                return (arr[index]);
        }

        const T &operator[](unsigned int index) const
        {
                if (index >= n || index < 0 || arr == nullptr)
                    throw (IndexOutOfBounds());
                return (arr[index]);
        }

    private:
        T *arr;
        unsigned int n;
		int siz;
};

#endif