/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pair.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychng <ychng@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 00:40:53 by ychng             #+#    #+#             */
/*   Updated: 2024/08/18 01:32:32 by ychng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PAIR_HPP
# define PAIR_HPP

# include <iostream>

using std::cout;
using std::endl;
using std::ostream;

template<typename K, typename V>
class Pair
{
public:
	Pair();
	~Pair();
	Pair(const Pair& src);
	Pair& operator=(const Pair& src);

	Pair(K key, V value);

	K getKey() const;
	V getValue() const;
private:
	K key;
	V value;
};

template<typename K, typename V>
Pair<K, V>::Pair() : key(K()), value(V())
{
	// cout << "Pair constructed" << endl;
}

template<typename K, typename V>
Pair<K, V>::~Pair()
{
	// cout << "Pair destructed" << endl;
}

template<typename K, typename V>
Pair<K, V>::Pair(const Pair& src) : key(src.getKey()), value(src.getValue())
{
	// cout << "Pair copied" << endl;
}

template<typename K, typename V>
Pair<K, V>& Pair<K, V>::operator=(const Pair& src)
{
	if (this != &src)
	{
		key = src.getKey();
		value = src.getValue();
		// cout << "Pair assigned" << endl;
	}
	return *this;
}

template<typename K, typename V>
Pair<K, V>::Pair(K key, V value) : key(key), value(value)
{
	// cout << "Pair constructed with user values" << endl;
}

template<typename K, typename V>
K Pair<K, V>::getKey() const
{
	return key;
}

template<typename K, typename V>
V Pair<K, V>::getValue() const
{
	return value;
}

template<typename K, typename V>
ostream& operator<<(ostream& stream, const Pair<K, V>& pair)
{
	stream << "( key=" << pair.getKey() << ", value=" << pair.getValue() << " )" << endl;
	return stream;
}

#endif
