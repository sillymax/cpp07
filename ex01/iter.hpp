/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychng <ychng@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 21:23:42 by ychng             #+#    #+#             */
/*   Updated: 2024/08/17 21:33:52 by ychng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template<typename T>
void iter(T* arr, int length, void (*func)(const T&))
{
	for (int i = 0; i < length; i++)
		func(arr[i]);
}
