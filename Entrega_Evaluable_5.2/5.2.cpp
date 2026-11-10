#include <iostream>
int main() {
	double x1; //creamos variables para loc 3 coches y sus precios
	int precio1;
	double x2;
	int precio2;
	double x3;
	int precio3;
	std::cout << "Introduzca la cantidad de horas de estacionamiento del primer vehiculo: "; //el usuario introduce los datos
	std::cin >> x1;
	std::cout << "Introduzca la cantidad de horas de estacionamiento del segundo vehiculo: ";
	std::cin >> x2;
	std::cout << "Introduzca la cantidad de horas de estacionamiento del tercer vehiculo: ";
	std::cin >> x3;
	std::cout << "Coche\tHoras\tCoste" << std::endl; 
	if (x1<=3) { //calculo primer coche
		precio1 = 20;
		std::cout << "1\t" << x1 << "\t" << precio1 << std::endl;
	}
	else if (x1>3) {
		precio1 = 20 + (5*(ceil(x1)-3));
		if (precio1 >= 50) { //si el precio supera los 50€, se le pone el precio maximo de 50€ y las horas maximas de 24h
			x1 = 24;
			precio1 = 50;
			std::cout << "1\t" << x1 << "\t" << precio1 << std::endl;
		}
		else {
			std::cout << "1\t" << x1 << "\t" << precio1 << std::endl;
		}

	}
	if (x2<=3) { //calculo segundo coche
		precio2 = 20;
		std::cout << "2\t" << x2 << "\t" << precio2 << std::endl;
	}
	else if (x2>3) {
		precio2 = 20 + (5*(ceil(x2)-3));
		if (precio2 >= 50) {
			x2 = 24;
			precio2 = 50;
			std::cout << "2\t" << x2 << "\t" << precio2 << std::endl;
		}
		else {
			std::cout << "2\t" << x2 << "\t" << precio2 << std::endl;
		}	
	}
	if (x3<=3) { //calculo tercer coche
		precio3 = 20;
		std::cout << "3\t" << x3 << "\t" << precio3	 << std::endl;
	}
	else if (x3>3) {
		precio3 = 20 + (5*(ceil(x3)-3));
		if (precio3 >= 50) {
			x3 = 24;
			precio3 = 50;
			std::cout << "3\t" << x3 << "\t" << precio3 << std::endl;
		}
		else {
			std::cout << "3\t" << x3 << "\t" << precio3 << std::endl;
		}
	}
	std::cout << "Total\t" << x1 + x2 + x3 << "\t" << precio1 + precio2 + precio3 << std::endl; //calculo total de horas y precio
	return 0;
}