#include <iostream>
#include <string>
#include <Windows.h>
#include <vector>
#include <conio.h>
#include "Car.h"
#include "Owner.h"

std::vector<Car> CarsArr;
std::string input;
int ch;

bool Password(std::string input) {
	std::string correctPass = "Admin";
	if (input != correctPass) {
		return false;
	}
	if (input == correctPass) {
		return true;
	}
}

void insertCar()
{
	std::string car_Brand;
	std::string car_Model;
	int date_Prod;
	int horse_Pow;
	std::cout << "Wprowadz marke samochodu:" << std::endl;
	std::cin >> car_Brand;
	std::cout << "Wprowadz model samochodu:" << std::endl;
	std::cin >> car_Model;
	std::cout << "Wprowadz rok wyprodukowania samochodu:" << std::endl;
	std::cin >> date_Prod;
	std::cout << "Wprowadz ilosc koni mechanicznych samochodu:" << std::endl;
	std::cin >> horse_Pow;
	CarsArr.push_back(Car(car_Brand, car_Model, date_Prod, horse_Pow));
}

void showCars() {
	for (int i = 0; i < CarsArr.size(); i++) {
		std::cout << CarsArr[i]<<std::endl;
	}
}

void OwnerMenu()
{
	std::cout << "Wprowadz haslo: "; //has³o to: Admin
	ch = _getch();
	while (ch != 13) {
		input.push_back(ch);
		std::cout << "*";
		ch = _getch();
	}
	system("cls");
	if (Password(input) == false) {
		system("cls");
		std::cout << "Haslo nieprawidlowe" << std::endl;
		Sleep(1000);
	}
	if (Password(input) == true) {
		std::cout << "Haslo poprawne" << std::endl;
		Sleep(500);
		system("cls");
		std::cout << std::endl;
		std::cout << "-----------------------------" << std::endl;
		std::cout << "      Witamy wlasciciela     " << std::endl;
		std::cout << "-----------------------------" << std::endl;
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
			insertCar();
			std::cout << "Samochod zostal wprowadzony poprawnie do bazy danych" << std::endl;
			Sleep(1000);
			system("cls");
			break;
		case 2:
			std::cout << "Posiadane samochody" << std::endl;
			showCars();
			system("pause");
			system("cls");
			break;
		case 3:
			system("cls");

		default:

			break;
		}
	}
}

