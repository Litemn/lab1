//
// Created by Oleg Trifonov on 11.09.2014.
// All rights reserved.
//

#include <iostream>
#include <cmath>
#include "myLibOfFirstLab.h"

int main() {

	setlocale(LC_ALL, "rus");

	double* coordinateX = (double*)(malloc(sizeof(double)));
	double* coordinateY = (double*)(malloc(sizeof(double)));

	inputCoordinates(coordinateX, coordinateY);

	bool hit = checkIfHit(*coordinateX, *coordinateY);

	outputResult(hit);

	system("pause");

	free(coordinateY);
	free(coordinateX);

	return 0;
}