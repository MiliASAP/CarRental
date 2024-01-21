#include <iostream>
#include <string>
#include <Windows.h>
#include <vector>
#include <conio.h>
#include "Car.h"
#include "Owner.h"

std::vector<char> input;
char ch;

bool Password(const std::vector<char>& input) {
	std::string correctPass = "Admin";
	std::string inputString(input.begin(), input.end());

	if (inputString != correctPass) {
		return false;
	}
	else {
		return true;
	}
}

int OwnerMenu()
{
	bool check = true;
	std::cout << "Wprowadz haslo: "; // has³o to: Admin
	ch = _getch();

	while (ch != 13) {
		try {
			if (ch == 8) {
				if (!input.empty()) {
					input.pop_back();
					std::cout << "\b \b";
				}
			}
			else {
				input.push_back(ch);
				std::cout << "*";
			}
		}
		catch (const std::exception& e) {
			std::cerr << "Wystapil blad: " << e.what() << std::endl;
			return 1; 
		}
		ch = _getch();
	}
		system("cls");
		if (Password(input) == false) {
			system("cls");
			std::cout << "Haslo nieprawidlowe" << std::endl;
			Sleep(1000);
			system("cls");
		}
		if (Password(input) == true) {
			std::cout << "Haslo poprawne" << std::endl;
			Sleep(500);
			system("cls");
			std::cout << std::endl;
			std::cout << "-----------------------------" << std::endl;
			std::cout << "      Witamy wlasciciela     " << std::endl;
			std::cout << "-----------------------------" << std::endl;
			while (check == true) {
			std::cout << std::endl;
			Sleep(500);
			std::cout << "1. Dodaj samochod" << std::endl;
			std::cout << "2. Przegladaj posiadane samochody" << std::endl;
			std::cout << "3. Wroc do panelu glownego" << std::endl;
			int chooseOwner;
			std::cin >> chooseOwner;
			switch (chooseOwner)
			{
			case 1:
				std::cout << std::endl;
				std::cout << "Dodawanie samochodu" << std::endl;
				Sleep(500);
				system("cls");
				Car::insertCar();
				std::cout << "Samochod zostal wprowadzony poprawnie do bazy danych" << std::endl;
				Sleep(1000);
				system("cls");
				break;
			case 2:
				std::cout << "Posiadane samochody" << std::endl;
				Car::showCars();
				system("pause");
				system("cls");
				break;
			case 3:
				check = false;
				system("cls");
			default:
				break;
			}
		}
	}
}

