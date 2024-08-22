/*

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

*/

/*

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

*/

/*

		// SIMPLE STRING

#include <iostream>

std::string myName(std::string myFullName);

std::string myName(std::string myFullName) {
	return myFullName;
}

int main() {

	std::string myFullName = "Preslav Petkov";

	std::cout << "My name is: " << myFullName << '\n';

	return 0;

}

*/

/*

		// STRING CONCATENATION

#include <iostream>
#include <string>

std::string concatenateStrings(std::string string1, std::string string2);

std::string concatenateStrings(std::string string1, std::string string2) {
	return string1 + " " + string2;
}

int main() {

	std::string firstName = "Preslav";
	std::string lastName = "Petkov";
	std::string fullName = concatenateStrings(firstName, lastName);

	std::cout << "Hello " << fullName;

	return 0;
}

*/