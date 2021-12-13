/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmedina- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 21:02:18 by pmedina-          #+#    #+#             */
/*   Updated: 2021/12/13 21:07:56 by pmedina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef ITER_H
# define ITER_H

template <typename T>
void plusOne(T &t) {
	t += 1;
}

template <typename T>
void display(T const &t) {
	std::cout << t << " ";
}

// Const param definition
template <typename T>
void iter(T *arr, size_t len, void (*fp)(T const&)) {
	for (size_t i = 0; i < len; i++) {
		(*fp)(arr[i]);
	}
}

// Definition to allow override
template <typename T>
void iter(T *arr, size_t len, void (*fp)(T&)) {
	for (size_t i = 0; i < len; i++) {
		(*fp)(arr[i]);
	}
}

#endif
