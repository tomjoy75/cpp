/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <tjoyeux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 16:14:50 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/12/03 09:44:06 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main(){
	std::cout << BLUE << "Initial test" << RESET << std::endl;
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);
	
	std::cout << mstack.top() << std::endl;

	mstack.pop();

	std::cout << mstack.size() << std::endl;
	
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;
	std::cout << BLUE << "Show content in mstack" << RESET << std::endl;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	std::cout << BLUE << "My own test (and my own stack)" << RESET << std::endl;
	MutantStack<int>	myStack;
	if (myStack.empty())
		std::cout << "MutantStack is empty" << std::endl;
	myStack.push(1);
	myStack.push(2);
	myStack.push(3);

	myStack.push(42);
	std::cout << BLUE << "Before Swapping" << RESET << std::endl;
	std::cout << BLUE << ITALIC << "\tContent of my stack" << RESET << std::endl;
	myStack.showData();
	std::cout << BLUE << ITALIC << "\tContent of original stack" << RESET << std::endl;
	mstack.showData();
	myStack.swap(mstack);
	std::cout << BLUE << "After Swapping" << RESET << std::endl;
	std::cout << BLUE << ITALIC << "\tContent of my stack" << RESET << std::endl;
	myStack.showData();
	std::cout << BLUE << ITALIC << "\tContent of original stack" << RESET << std::endl;
	mstack.showData();
	std::cout << BLUE << ITALIC << "Check of relationnal operators" << RESET << std::endl;
	MutantStack<int>	copyStack;
	
	copyStack.push(1);
	copyStack.push(2);
	copyStack.push(3);
	copyStack.push(42);
	myStack.swap(mstack);
	if (copyStack == myStack)
		std::cout << "The two stacks are similar" << std::endl;
	if (copyStack != myStack)
		std::cout << "The two stacks are different" << std::endl;
	if (copyStack <= myStack)
		std::cout << "The copy stack is <= the original" << std::endl;
	if (!(copyStack < myStack))
		std::cout << "but not strictly < to the original" << std::endl;
	if (copyStack != mstack)
		std::cout << "The 42 stack is different" << std::endl;
	if (copyStack < mstack)
		std::cout << "The 42 stack is superior" << std::endl;
	if (copyStack > mstack)
		std::cout << "The 42 stack is inferior" << std::endl;
	std::cout << BLUE << ITALIC << "Check of functions on empty stack" << RESET << std::endl;
	MutantStack<std::string>	newStack;
	if (newStack.empty())
		std::cout << "NewStack is empty" << std::endl;
	newStack.pop();
	try{
		std::cout << newStack.top() << std::endl;
	}
	catch (std::logic_error &e){
		std::cerr << RED << e.what() << RESET << std::endl;
	}
	return 0;
}
