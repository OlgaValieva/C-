/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carys <carys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 10:52:25 by carys             #+#    #+#             */
/*   Updated: 2022/11/05 13:28:41 by carys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#define CLR "\x1b[1;32m"
#define RST "\x1b[0m"
#define BRN "\x1b[0;31m"

struct Data
{
	std::string name;	
};

//It takes a pointer and converts it to the unsigned integer type uintptr_t
uintptr_t serialize(Data* ptr) //
{
	return (reinterpret_cast < uintptr_t > (ptr));
}

//It takes an unsigned integer parameter and converts it to a pointer to Data
Data* deserialize(uintptr_t raw)
{
	return (reinterpret_cast < Data *  > (raw));
}

int main()
{
	Data data = {"Ayrat"};
	Data* ptr;
	uintptr_t raw;

	std::cout << BRN"Value Data: "RST<< data.name << BRN" Adress Data: "RST << &data << std::endl;
	std::cout << CLR"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"RST << std::endl;
	raw = serialize(&data);
	std::cout << BRN"Adress uintptr_t: "RST << raw << std::endl;
	std::cout << CLR"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"RST << std::endl;
	ptr = deserialize(raw);
	std::cout << BRN"Value Data*: "RST<< ptr->name << BRN" Adress "RST << ptr << std::endl;
	
	return (0);
}