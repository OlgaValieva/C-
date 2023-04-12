/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carys <carys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 17:02:10 by carys             #+#    #+#             */
/*   Updated: 2023/04/12 13:38:07 by carys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <ctime>
#include <iomanip>
#include <iostream>
#include <list>
#include <string>
#include <vector>

class PmergeMe {
    private :
        std::vector<int> vector;
        std::list<int> list;
        
    public :
        PmergeMe();
        PmergeMe(const PmergeMe &num);
        PmergeMe &operator=(const PmergeMe &num);
        ~PmergeMe();
        
        int check(char *str);
        double sorter(char **argv);
        void print();
        
        std::list<int> mergeList(std::list<int> &left, std::list<int> &right);
        void sorterList(std::list<int> &list);
        
        void insertionVector(std::vector<int> &vec, int left, int right);
        void mergeVector(std::vector<int> &vec, int left, int mid, int right);
        void sorterVector(std::vector<int> &vec, int left, int right, int k);
};
#endif