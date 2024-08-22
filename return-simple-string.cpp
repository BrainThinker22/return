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