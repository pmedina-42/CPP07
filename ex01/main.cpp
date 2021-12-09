/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmedina- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 21:08:33 by pmedina-          #+#    #+#             */
/*   Updated: 2021/12/09 21:40:32 by pmedina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main() {
	int i[6] = {1, 2, 3, 4, 5, 6};
	//iter(i, 6, plusOne<int>);
	iter(i, 6, display<int>);

	float f[3] = {1.01, 2.02, 3.03};
	iter(f, 3, display<float>);

	double d[5] = {1.0111, 2.0222, 3.0333, 4.0444, 5.0555};
	iter(d, 5, display<double>);

	char c[8] = {'p', 'm', 'e', 'd', 'i', 'n', 'a', '-'};
	iter(c, 8, display<char>);

	//std::string moi = "pmedina-";
	//iter(moi, moi.length(), display<char*>)
}
