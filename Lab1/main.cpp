//
// Created by Oleg Trifonov on 11.09.2014.
// All rights reserved.
//

#include <iostream>
#include <cmath>

using namespace std;

void inputCoordinates(int* x, int* y);
bool checkIfHit(int x, int y);
void outputResult(bool hit);

int main() {

	setlocale(LC_ALL, "rus");

	int* coordinateX = new int;
	int* coordinateY = new int;
	inputCoordinates(coordinateX, coordinateY);

	bool hit = checkIfHit(*coordinateX, *coordinateY);
	outputResult(hit);

	system("pause");

	delete coordinateY;
	delete coordinateX;

	return 0;
}

void inputCoordinates(int* x, int* y) {
	cout << "Введите координаты в формате" << endl << "Координата Х Координата Y" << endl;
	cin >> *x >> *y;
}

bool checkIfHit(int x, int y) {
	if (((pow(x, 2) + pow(y, 2)) <= 4) && !((pow(x, 2) + pow(y, 2) < 1) && (pow(x, 2) + pow(y, 2) > 0.25)))
		return 1;
	else
		return 0;
}

void outputResult(bool hit) {
	cout << (hit? "" : "не ") << "попал!" << endl;
}