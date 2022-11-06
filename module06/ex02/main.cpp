/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carys <carys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 10:52:25 by carys             #+#    #+#             */
/*   Updated: 2022/11/06 13:06:38 by carys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

//It randomly instanciates A, B or C and returns the instance as a Base pointer
Base * generate(void)
{
	int random = rand() % 3;
	
	switch(random)
	{
		case 0:
			return (new A);
		case 1:
			return (new B);
		case 2:
			return (new C);
	}
	return (0);
}

//It prints the actual type of the object pointed to by p: "A", "B" or "C"
void identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A type of the object pointed to by p" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B type of the object pointed to by p" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C type of the object pointed to by p" << std::endl;
	else
		std::cout << "Unknow type of the object pointed to by p" << std::endl;
}
void identify(Base& p)
{
	try
	{
		(void)dynamic_cast<A&>(p);
		std::cout << "A type of the object reference to by p" << std::endl;
		return ;
	}
	catch(const std::bad_cast & e) {}
	try
	{
		(void)dynamic_cast<B&>(p);
		std::cout << "B type of the object reference to by p" << std::endl;
		return ;
	}
	catch(const std::bad_cast & e) {}
	try
	{
		(void)dynamic_cast<C&>(p);
		std::cout << "C type of the object reference to by p" << std::endl;
		return ;
	}
	catch(const std::bad_cast & e) {}
}

int main()
{
	srand(time(0));
	Base *p;

	p = generate();
	identify(p);
	identify(*p);
	delete p;
	
	p = generate();
	identify(p);
	identify(*p);
	delete p;
	
	p = generate();
	identify(p);
	identify(*p);
	delete p;
	
	return (0);
}