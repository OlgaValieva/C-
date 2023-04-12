/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carys <carys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 17:02:06 by carys             #+#    #+#             */
/*   Updated: 2023/04/12 13:37:55 by carys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {}

PmergeMe::PmergeMe(const PmergeMe &num) {*this = num;}

PmergeMe &PmergeMe::operator=(const PmergeMe &num) {
    if (this != &num) {
        vector = num.vector;
        list = num.list;
    }
    return *this;
}

PmergeMe::~PmergeMe() {}

int PmergeMe::check(char *str)
{
    int i = 0;
    while (str[i])
    {
        if (!isdigit(str[i]))
            return 0;
        i++;
    }
    return 1;
}

double PmergeMe::sorter(char **argv)
{
    std::clock_t s, e;
    double v_time, l_time;
    for (int i = 1; argv[i]; i++)
    {
        if (argv[i][0] == '-')
            throw std::invalid_argument("Error");
        if (check(argv[i]))
        {
            vector.push_back(std::stoi(argv[i]));
            list.push_back(std::stoi(argv[i]));
        }
        else
            throw std::invalid_argument("Error");
    }
    std::cout << "Before: ";
    if (vector.size() <= (size_t)5)
    {
        for (size_t i = 0; i < vector.size(); i++)
            std::cout << vector[i] << " ";
        std::cout << std::endl;
    }
    else
    {
        for (size_t i = 0; i < 5; i++)
            std::cout << vector[i] << " ";
        std::cout << "[...]" << std::endl;
    }
    s = std::clock();
    sorterVector(vector, 0, vector.size() - 1, vector.size() / 4);
    e = std::clock();
    v_time = (double)(e - s) / CLOCKS_PER_SEC * 1000;
    s = std::clock();
    sorterList(list);
    e = std::clock();
    l_time = (double)(e - s) / CLOCKS_PER_SEC * 1000;
    std::cout << "After:  ";
    if (vector.size() <= (size_t)5)
    {
        for (size_t i = 0; i < vector.size(); i++)
            std::cout << vector[i] << " ";
        std::cout << std::endl;
    }
    else
    {
        for (size_t i = 0; i < 5; i++)
            std::cout << vector[i] << " ";
        std::cout << "[...]" << std::endl;
    }
    std::cout << "Time to process a range of " << vector.size()<< " elements with std::vector: " << std::setprecision(5) << v_time << " us" << std::endl;
    std::cout << "Time to process a range of " << vector.size() <<" elements with std::list: " << std::setprecision(5) << l_time << " us" << std::endl;
    return 0;
}

std::list<int> PmergeMe::mergeList(std::list<int> &left, std::list<int> &right)
{
  std::list<int> result;

  while (!left.empty() && !right.empty()) {
    if (left.front() <= right.front()) {
      result.push_back(left.front());
      left.pop_front();
    } else {
      result.push_back(right.front());
      right.pop_front();
    }
  }

  while (!left.empty()) {
    result.push_back(left.front());
    left.pop_front();
  }

  while (!right.empty()) {
    result.push_back(right.front());
    right.pop_front();
  }

  return result;
}

void PmergeMe::sorterList(std::list<int> &list)
{
if (list.empty() || list.size() == 1) {
    return;
  }

  std::list<int> left, right;
  size_t count = 0;
  for (std::list<int>::iterator it = list.begin(); it != list.end(); ++it) {
    if (count < list.size() / 2) {
      left.push_back(*it);
    } else {
      right.push_back(*it);
    }
    count++;
  }
  sorterList(left);
  sorterList(right);
  list = mergeList(left, right);
}

void PmergeMe::insertionVector(std::vector<int> &vec, int left, int right)
{
    for (int i = left + 1; i <= right; ++i) {
        int key = vec[i];
        int j = i - 1;
        
        while (j >= left && vec[j] > key) {
            vec[j+1] = vec[j];
            j--;
        }
        
        vec[j+1] = key;
    }
}

void PmergeMe::mergeVector(std::vector<int> &vec, int left, int mid, int right)
{
    int n1 = mid - left + 1;
    int n2 = right - mid;
    
    std::vector<int> L(n1), R(n2);
    
    for (int i = 0; i < n1; ++i) {
        L[i] = vec[left + i];
    }
    
    for (int j = 0; j < n2; ++j) {
        R[j] = vec[mid + 1 + j];
    }
    
    int i = 0, j = 0, k = left;
    
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            vec[k] = L[i];
            i++;
        }
        else {
            vec[k] = R[j];
            j++;
        }
        k++;
    }
    
    while (i < n1) {
        vec[k] = L[i];
        i++;
        k++;
    }
    
    while (j < n2) {
        vec[k] = R[j];
        j++;
        k++;
    }
}

void PmergeMe::sorterVector(std::vector<int> &vec, int left, int right, int k)
{
    if (left < right) {
        if (right - left + 1 <= k) {
            insertionVector(vec, left, right);
        }
        else { 
            int mid = left + (right - left) / 2;

            sorterVector(vec, left, mid, k);
            sorterVector(vec, mid+1, right, k);
            mergeVector(vec, left, mid, right);
        }
    }
}