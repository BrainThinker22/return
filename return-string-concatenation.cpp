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