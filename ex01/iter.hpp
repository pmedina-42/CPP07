/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmedina- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 21:02:18 by pmedina-          #+#    #+#             */
/*   Updated: 2021/12/12 17:36:34 by pmedina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef ITER_H
# define ITER_H

// TODO: falta arreglar el plusOne y ver como meter las strings y alguna funcion mas para iterar
template <typename T>
void plusOne(T &t) {
	t += 1;
}

template <typename T>
void display(T t) {
	std::cout << t << std::endl;
}

template <typename T>
void iter(T *arr, size_t len, void (*fp)(T const&)) {
	for (size_t i = 0; i < len; i++) {
		(fp)(arr[i]);
	}
}

#endif
