/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schene <schene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/20 10:41:31 by schene            #+#    #+#             */
/*   Updated: 2020/12/21 13:30:15 by schene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"
#include <list>

int main()
{
	{
		MutantStack<int> mstack;
		std::cout << "empty? " << std::boolalpha << mstack.empty() << std::endl;
		std::cout << "push 5 and 17..." << std::endl;
		mstack.push(5);
		mstack.push(17);
		std::cout << "empty? " << std::boolalpha << mstack.empty() << std::endl;
		std::cout << "top = " << mstack.top() << std::endl;
		std::cout << "pop ..." << std::endl;
		mstack.pop();
		std::cout << "size = " << mstack.size() << std::endl;
		std::cout << "push 3, 5, 737, 0, 42 ..." << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);
		mstack.push(42);
		std::cout << "size = " << mstack.size() << std::endl;
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		std::cout << "mtack = ";
		while (it != ite)
		{
			std::cout << *it << ' ';
			++it;
		}
		std::cout << std::endl;
		std::cout << "creating s from mstack" << std::endl;
		std::stack<int> s(mstack);
		std::cout << "mstack size = " << mstack.size() << std::endl;
		std::cout << "s size = " << s.size() << std::endl;
	}
	{
		std::cout << std::endl << "let's do exactly the same but with a std::list instead of our mutant stack" << std::endl;
		
		std::list<int>  lst;
		std::cout << "empty? " << std::boolalpha << lst.empty() << std::endl;
		std::cout << "push_front 5 and 17..." << std::endl;
		lst.push_front(5);
		lst.push_front(17);
		std::cout << "empty? " << std::boolalpha << lst.empty() << std::endl;
		std::cout << "front = " << lst.front() << std::endl;
		std::cout << "pop_front ..." << std::endl;
		lst.pop_front();
		std::cout << "size = " << lst.size() << std::endl;
		std::cout << "push_front 3, 5, 737, 0, 42 ..." << std::endl;
		lst.push_front(3);
		lst.push_front(5);
		lst.push_front(737);
		lst.push_front(0);
		lst.push_front(42);
		std::cout << "size = " << lst.size() << std::endl;
		std::list<int>::iterator it = lst.begin();
		std::list<int>::iterator ite = lst.end();
		++it;
		--it;
		std::cout << "lst = ";
		while (it != ite)
		{
			std::cout << *it << ' ';
			++it;
		}
		std::cout << std::endl;
		return 0;
	}
}