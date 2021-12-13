/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmedina- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 17:39:22 by pmedina-          #+#    #+#             */
/*   Updated: 2021/12/12 18:49:04 by pmedina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_H
# define ARRAY_H

#include <iostream>

template <class T>

class Array {
	private:
		size_t size;
		T *value;
	public:
		// Constructors & Destructor
		Array() : value(new T()), size(0) { }
		Array(unsigned int n) : value(new T[n]()), size(n) { }
		Array(Array const&);
		virtual ~Array() { }

		size_t size() {
			return size;
		}
	
		Array& operator=(Array const &c) {
			
		}

		T& operator[](size_t i) const {
			i > size ? throw OutOfBoundsException() : 0;
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
