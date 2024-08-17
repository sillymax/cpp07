/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychng <ychng@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 21:08:40 by ychng             #+#    #+#             */
/*   Updated: 2024/08/17 21:24:23 by ychng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template<typename T>
void swap(T& a, T& b)
{
	T temp;

	temp = a;
	a = b;
	b = temp;
}

template<typename T>
T min(const T& a, const T& b)
{
	return (a < b) ? a : b;
}

template<typename T>
T max(const T& a, const T& b)
{
	return (a > b) ? a : b;
}
