#include <iostream>
#include <Windows.h>
#include "Owner.h"
#include <string>
#include <vector>
#include <conio.h>

void Menu();

int main()
{
	
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "             WITAMY             " << std::endl;
	Sleep(1000);
	system("cls");
	Menu();
}

void Menu() {
	bool check = true;
	while (check==true) {
		std::cout << "              _____     _       " << std::endl;
		std::cout << "         ____/____|____/        " << std::endl;
		std::cout << "        /___(O)___|_(O)|        " << std::endl;
		std::cout << std::endl;
		std::cout << "--------------------------------" << std::endl;
		std::cout << "Wypozyczalnia samochodow BOHUNEX" << std::endl;
		std::cout << "--------------------------------" << std::endl;
		std::cout << std::endl;
		std::cout << "________________________________" << std::endl;
		std::cout << std::endl;
		std::cout << "        Wybierz profil          " << std::endl;
		std::cout << "________________________________" << std::endl;
		std::cout << std::endl;
		std::cout << "1. Wlasciciel" << std::endl;
		std::cout << "2. Klient" << std::endl;
		std::cout << "3. Wyjscie " << std::endl;
		std::cout << std::endl;
		std::cout << "Wybor opcji: ";
		int userChoose;
		std::cin >> userChoose;
		system("cls");
		switch (userChoose)
		{
		case 1:
			OwnerMenu();
			break;
		case 2:
			std::cout << std::endl;
			std::cout << "-----------------------------" << std::endl;
			std::cout << "        Witaj kliencie       " << std::endl;
			std::cout << "-----------------------------" << std::endl;
			std::cout << std::endl;
			break;
		case 3:
			std::cout << std::endl;
			std::cout << "-----------------------------" << std::endl;
			std::cout << "        Do zobaczenia        " << std::endl;
			std::cout << "-----------------------------" << std::endl;
			Sleep(1000);
			system("cls");
			check = false;
			break;
		default:
			break;
		}
	}
	
}