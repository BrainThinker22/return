// AREA OF A SQUARE													

#include <iostream>

double square(double length);

double square(double length) {
	return length * length;
}

int main() {

	double length = 6.0;
	double area = square(length);

	std::cout << "Area: " << area << " cm^2\n";

	return 0;
}