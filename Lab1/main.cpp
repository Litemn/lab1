//
// Created by Oleg Trifonov on 11.09.2014.
// All rights reserved.
//
#include "myLibOfFirstLab.h"
#include <iostream>

int main() {

	setlocale(LC_ALL, "rus");

	double* coordinateX = (double*)(malloc(sizeof(double)));
	double* coordinateY = (double*)(malloc(sizeof(double)));
	bool* oneTimeAgain = (bool*)(malloc(sizeof(bool)));
	
	do {

		inputCoordinates(coordinateX, coordinateY);

		bool hit = checkIfHit(*coordinateX, *coordinateY);

		outputResult(hit);

		cout << "Õîòèòå åùå? (1 - äà, 0 - íåò)" << endl;
		cin >> *oneTimeAgain;

	} while (*oneTimeAgain);

	system("pause");
	
	free(oneTimeAgain);
	free(coordinateY);
	free(coordinateX);

	return 0;
}
