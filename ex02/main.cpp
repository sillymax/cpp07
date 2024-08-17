/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychng <ychng@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 00:26:49 by ychng             #+#    #+#             */
/*   Updated: 2024/08/18 01:38:20 by ychng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pair.hpp"
#include "Array.hpp"
#include <iostream>

using std::cout;
using std::endl;
using std::string;
using std::exception;

int main()
{
	try
	{
		Array<int> arr0(10);
		arr0[3] = 5;
		cout << arr0 << endl;

		Array<string> arr1(5);
		arr1[2] = "Hello World!";
		// arr1[5] = "Hello World!";
		cout << arr1 << endl;

		Array<Pair<string, int> > arr2(10);
		arr2[0] = Pair<string, int>("a", 42);
		arr2[9] = Pair<string, int>("WHAT", 24);
		cout << arr2 << endl;
	}
	catch (const exception& e)
	{
		cout << e.what() << endl;
	}
}

