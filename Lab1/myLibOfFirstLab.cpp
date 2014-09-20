#include "myLibOfFirstLab.h"
#include <iostream>
#include <cmath>


void inputCoordinates(double* x, double* y) {
	std::cout << "Введите координаты в формате" << std::endl << "Координата Х Координата Y" << std::endl;
	std::cin >> *x >> *y;
}

bool checkIfHit(double& x, double& y) {
	if (((pow(x, 2) + pow(y, 2)) <= 4) && !((pow(x, 2) + pow(y, 2) < 1) && (pow(x, 2) + pow(y, 2) > 0.25)))
		return 1;
	else
		return 0;
}

void outputResult(bool hit) {
	std::cout << (hit ? "" : "не ") << "попал!" << std::endl;
}