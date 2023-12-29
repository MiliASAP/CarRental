#include <iostream>
#include <string>
#include <Windows.h>

bool Password(std::string input) {
	std::string correctPass = "Admin";
	if (input != correctPass) {
		return false;
	}
	if (input == correctPass) {
		return true;
	}
}