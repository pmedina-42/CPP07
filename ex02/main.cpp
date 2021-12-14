/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmedina- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 21:08:33 by pmedina-          #+#    #+#             */
/*   Updated: 2021/12/14 20:03:27 by pmedina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

//////////////////////////////////////////////////////////////
//                       EXAMPLE CLASS                      //
//////////////////////////////////////////////////////////////

class Data {
	private:
		std::string content;
	public:
		Data() { }
		virtual ~Data() { }
		void setContent(std::string c) { content = c; }
		std::string getContent() { return content; }
};

void leakicious() {
	system("leaks array");
}

int main() {
	//atexit(leakicious);
	try {

		Array <int> a;
		Array <int> b(8);
		b[0] = 1;
		b[1] = 2;
		std::cout << a.size() << std::endl;
		std::cout << b.size() << std::endl;
		//std::cout << a[0] << std::endl;
		std::cout << b[0] << ", " << b[1] << std::endl;
		Array <int> c(b);
		std::cout << "\n";
		b[0] = 3;
		std::cout << b[0] << ", " << b[1] << std::endl;
		std::cout << c[0] << ", " << c[1] << std::endl;

		Array <float> f(2);
		f[0] = 1.54;
		f[1] = 2.2;
		std::cout << f.size() << std::endl;
		std::cout << f[0] << ", " << f[1] << std::endl;
		Array <float> cf(f);
		std::cout << "\n";
		f[0] = 0.42;
		std::cout << f[0] << ", " << f[1] << std::endl;
		std::cout << cf[0] << ", " << cf[1] << std::endl;

		Array <std::string> s(4);
		s[0] = "hola";
		s[1] = "buenas";
		std::cout << s[0] << ", " << s[1] << std::endl;
		Array <std::string> cs(s);
		cs[2] = "que tal";
		//cs[4] = "ok";
		s[0] = "adios";
		s[1] = "";
		std::cout << cs[0] << ", " << cs[1] << ", " << cs[2] << ", " << cs[3] << std::endl;
		std::cout << s[0] << ", " << s[2] << std::endl;
		std::cout << "\n";

		Array <Data> obj(3);
		Data data;
		data.setContent("array");
		obj[0] = data;
		data.setContent("de");
		obj[1] = data;
		data.setContent("objetos");
		obj[2] = data;
		std::cout << obj[0].getContent() << ", " << obj[1].getContent() << ", " << obj[2].getContent() << std::endl;
		Array <Data> objcpy(obj);
		data.setContent("array original");
		obj[0] = data;
		data.setContent("array copia");
		objcpy[0] = data;
		std::cout << objcpy[0].getContent() << ", " << objcpy[1].getContent() << ", " << objcpy[2].getContent() << std::endl;
		std::cout << obj[0].getContent() << ", " << obj[1].getContent() << ", " << obj[2].getContent() << std::endl;

	} catch (Array<char>::OutOfBoundsException e) {
		std::cout << e.getMessage() << std::endl;
	} catch (Array<int>::OutOfBoundsException e) {
		std::cout << e.getMessage() << std::endl;
	} catch (Array<float>::OutOfBoundsException e) {
		std::cout << e.getMessage() << std::endl;
	} catch (Array<double>::OutOfBoundsException e) {
		std::cout << e.getMessage() << std::endl;
	} catch (Array<std::string>::OutOfBoundsException e) {
		std::cout << e.getMessage() << std::endl;
	} catch (...) { }
	return 0;
}
