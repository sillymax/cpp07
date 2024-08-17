/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychng <ychng@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 21:54:06 by ychng             #+#    #+#             */
/*   Updated: 2024/08/18 01:33:40 by ychng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <cstddef>
# include <stdexcept>
# include <ostream>

using std::ostream;

template<typename T>
class Array
{
public:
	Array();
	~Array();
	Array(const Array& src);
	Array& operator=(const Array& src);

	Array(unsigned int n);
	T& operator[](size_t index);

	unsigned int size() const;
private:
	unsigned int n;
	T* arr;
};

template<typename T>
Array<T>::Array()
{
	n = 0;
	arr = new T[n];
	// cout << "Array constructed" << endl;
}

template<typename T>
Array<T>::Array(unsigned int n)
{
	T* defaultValue = new T();
	this->n = n;
	this->arr = new T[n];
	for (unsigned int i = 0; i < n; i++)
		this->arr[i] = *defaultValue;
	delete defaultValue;
	// cout << "Array constructed with n items" << endl
}

template<typename T>
Array<T>::~Array()
{
	delete[] arr;
	// cout << "Array destructed" << endl;
}

template<typename T>
Array<T>::Array(const Array& src)
{
	n = src.n;
	arr = new T[src.n];
	for (unsigned int i = 0; i < src.n; i++)
		arr[i] = src.arr[i];
	// cout << "Array copied" << endl;
}

template<typename T>
Array<T>& Array<T>::operator=(const Array<T>& src)
{
	if (this != &src)
	{
		delete[] arr;
		n = src.n;
		arr = new T[src.n];
	}
	for (unsigned int i = 0; i < src.n; i++)
		arr[i] = src.arr[i];
	return *this;
	// cout << "Array assigned" << endl;
}

template<typename T>
T& Array<T>::operator[](size_t index)
{
	if (index >= n)
		throw std::exception();
	return arr[index];
}

template<typename T>
unsigned int Array<T>::size() const
{
	return n;
}

template<typename T>
ostream& operator<<(ostream& stream, Array<T>& array)
{
	for (unsigned int i = 0; i < array.size(); i++)
		stream << array[i] << endl;
	return stream;
}

#endif
