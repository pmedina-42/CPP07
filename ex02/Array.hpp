/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmedina- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 17:39:22 by pmedina-          #+#    #+#             */
/*   Updated: 2021/12/13 21:08:14 by pmedina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_H
# define ARRAY_H

#include <iostream>

template <class T>

class Array {
	private:
		size_t _size;
		T *value;
	public:
		// Constructors & Destructor
		Array() : _size(0), value(new T[0]()) { }
		Array(unsigned int n) : value(new T[n]()), _size(n) { }
		Array(Array const&);
		virtual ~Array() { }

		size_t size() {
			return _size;
		}
	
		Array& operator=(Array const &c) {
			(void)c;
		}

		T& operator[](size_t i) const {
			i > _size ? throw OutOfBoundsException() : 0;
			return this[i];	
		}

		// OOB Exception
		class OutOfBoundsException : public std::exception {
			public:
				std::string getMessage() {
					return "Index out of bounds";
				}
		};
};

#endif
