/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychng <ychng@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 21:34:14 by ychng             #+#    #+#             */
/*   Updated: 2024/08/17 21:50:51 by ychng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

using std::cout;
using std::endl;

template<typename T>
void display(const T& item)
{
	cout << item << endl;
}

int main()
{
	int arr1[] = {3, 1, 2, 4};
	cout << "arr1" << endl;
	::iter(arr1, 4, display);

	cout << endl;
	cout << "arr2" << endl;
	double arr2[] = {2.1, 2.9, 0.1};
	::iter(arr2, 3, display);
}