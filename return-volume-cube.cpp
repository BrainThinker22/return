// VOLUME OF A CUBE

#include <iostream>

double cube(double length);

double cube(double length) {
	return length * length * length;
}

int main() {

	double length = 8.0;
	double volume = cube(length);

	std::cout << "Volume: " << volume << " cm^3\n";

	return 0;
}