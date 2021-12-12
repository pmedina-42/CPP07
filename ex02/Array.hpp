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
		T array[];
	public:
		// Constructors & Destructor
		Array() { 
			//*this = new Array;
		}
		Array(unsigned int n){
			*this = new Array[n];
			for (size_t i; i < n; i++)
				*this[i] = new Array();
			
		}
		Array(Array const&);
		virtual ~Array() { }

		Array& operator=(Array const &c) {
			for (size_t i; this[i] != NULL; i++) {
				*this[i] = c[i];
			}
			return *this;
		}

		Array& operator[](size_t i) const {
			i > 10 ? throw OutOfBoundsException() : 0;
			return this[i];	
		}

		// OOB Exception
		class OutOfBoundsException {
			public:
				std::string getMessage() {
					return "Index out of bounds";
				}
		};
};

#endif
