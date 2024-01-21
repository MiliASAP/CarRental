#include <iostream>
#include <string>
#include <Windows.h>
#include <vector>
#include <conio.h>
#include <fstream>
#include "Car.h"

void ClientMenu() {
	std::string brand;
	std::string model;
	int choose;
	bool check = true;
	std::string name;
	std::string surname;
	std::cout << std::endl;
	std::cout << "-----------------------------" << std::endl;
	std::cout << "        Witaj kliencie       " << std::endl;
	std::cout << "-----------------------------" << std::endl;
	Sleep(1000);
	system("cls");
	std::cout << std::endl;
	std::cout << "Wprowadz imie: ";
	std::cin >> name;
	std::cout << std::endl;
	std::cout << "Wprowadz nazwisko: ";
	std::cin >> surname;
	system("cls");
	while (check==true) {
		std::cout << "1. Wypozycz samochod" << std::endl;
		std::cout << "2. Wroc do panelu glownego" << std::endl;
		std::cin >> choose;
		switch (choose)
		{
		case 1:
			if (Car::showCars()==false) {
				std::cout << "Wprowadz marke i model samochodu ktorego chcesz wynajac" << std::endl;
				std::cout << "Marka: ";
				std::cin >> brand;
				std::cout << std::endl;
				std::cout << "Model: ";
				std::cin >> model;
				std::cout << std::endl;
				std::string chosen = Car::chooseCar(brand, model);
				std::ofstream MyFile;
				MyFile.open(surname + ".txt", std::ios_base::app);
				if (MyFile.is_open()) {
					MyFile << chosen;
					MyFile.close();
				}
				else {
					std::cerr << "Nie mozna otworzyc pliku: " << surname << std::endl;
				}
				system("pause");
				system("cls");
			}
			else {
				std::cout << "Brak samochodow do wyswietlenia" << std::endl;
				system("pause");
				system("cls");
				check = false;
			}
			break;
		case 2:
			check = false;
			system("cls");
			break;
		default:
			break;
		}
	}
}