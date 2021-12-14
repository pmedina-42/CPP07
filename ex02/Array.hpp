/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmedina- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 17:39:22 by pmedina-          #+#    #+#             */
/*   Updated: 2021/12/14 20:02:41 by pmedina-         ###   ########.fr       */
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
		Array(unsigned int n) : _size(n), value(new T[n]()) { }
		Array(Array<T> const &c) : _size(c.size()) , value(new T[c.size()]) {
			*this = c;
		}
		virtual ~Array() {
			delete [] value;
		}

		size_t size() const {
			return _size;
		}
	
		Array& operator=(Array const &c) {
			if (&c != this) {
				delete [] value;
				_size = c.size();
				value = new T[_size]();
				for (size_t i = 0; i < _size; i++) {
					value[i] = c[i];
				}
			}
			return *this;
		}

		T& operator[](long i) const {
			i > (long)_size - 1 ? throw OutOfBoundsException() : 0;
			return this->value[i];	
		}

		// OOB Exception
		class OutOfBoundsException : public std::exception {
			public:
				std::string getMessage() const throw() {
					return "Index out of bounds";
				}
		};
};

#endif
