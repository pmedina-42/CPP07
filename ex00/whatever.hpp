/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmedina- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 20:36:10 by pmedina-          #+#    #+#             */
/*   Updated: 2021/12/09 21:00:36 by pmedina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_H
# define WHATEVER_H

#include <iostream>

template <typename T>
void swap(T &a, T &b) {
	T c = a;
	a = b;
	b = c;
	return ;
}

template <typename T>
T const& min(T const &a, T const &b) {
	return (a < b ? a : b);
}

template <typename T>
T const& max(T const &a, T const &b) {
	return (a > b ? a : b);
}

#endif
