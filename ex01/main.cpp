/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmedina- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 21:08:33 by pmedina-          #+#    #+#             */
/*   Updated: 2021/12/13 21:06:01 by pmedina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main() {
	std::cout << "INT" << std::endl << "------------------------" << std::endl;
	int i[6] = {1, 2, 3, 4, 5, 66};
	iter(i, 6, display<int>);
	std::cout << "\n";
	iter(i, 6, plusOne<int>);
	iter(i, 6, display<int>);
	std::cout << "\n\n";

	std::cout << "FLOAT" << std::endl << "------------------------" << std::endl;
	float f[3] = {1.01, 2.02, 3.03};
	iter(f, 3, display<float>);
	std::cout << "\n";
	iter(f, 3, plusOne<float>);
	iter(f, 3, display<float>);
	std::cout << "\n\n";

	std::cout << "DOUBLE" << std::endl << "------------------------" << std::endl;
	double d[5] = {1.0111, 2.0222, 3.0333, 4.0444, 5.0555};
	iter(d, 5, display<double>);
	std::cout << "\n";
	iter(d, 5, plusOne<double>);
	iter(d, 5, display<double>);
	std::cout << "\n\n";

	std::cout << "CHAR*" << std::endl << "------------------------" << std::endl;
	char c[8] = {'p', 'm', 'e', 'd', 'i', 'n', 'a', '-'};
	iter(c, 8, display<char>);
	std::cout << "\n";
	iter(c, 8, plusOne<char>);
	iter(c, 8, display<char>);
	std::cout << "\n\n";
}
