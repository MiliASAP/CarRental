#include <iostream>
#include <Windows.h>
#include "Owner.h"
#include <string>
#include <conio.h>

int main()
{
	std::cout << "              _____     _       " << std::endl;
	std::cout << "         ____/____|____/        " << std::endl;
	std::cout << "        /___(O)___|_(O)|        " << std::endl;
	std::cout << std::endl;
	std::cout << "--------------------------------" << std::endl;
	std::cout << "Witamy w wypozyczalni samochodow" << std::endl;
	std::cout << "--------------------------------" << std::endl;
	std::cout << std::endl;
	std::cout << "________________________________" << std::endl;
	std::cout << std::endl;
	std::cout << "        Wybierz profil          " << std::endl;
	std::cout << "________________________________" << std::endl;
	std::cout << std::endl;
	std::cout << "1. Wlasciciel" << std::endl;
	std::cout << "2. Klient" << std::endl;	
	std::cout << "3. Wyjscie" << std::endl;
	int userChoose;
	std::cout << std::endl;
	std::cout << "Wybor opcji: ";
	std::cin >> userChoose;
	system("cls");
	int ch;
	std::string input;
	switch (userChoose)
	{
	case 1:
		std::cout << "Wprowadz haslo: "; //has³o to: Admin
		ch = _getch();
		while (ch != 13) {
			input.push_back(ch);
			std::cout << "*";
			ch = _getch();
		}
		system("cls");
		if (Password(input)==false) {
			system("cls");
			std::cout << "Haslo nieprawidlowe" << std::endl;
			Sleep(1000);
			break;
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
		}
		break;
	case 2:
		std::cout << std::endl;
		std::cout << "-----------------------------" << std::endl;
		std::cout << "        Witaj kliencie       " << std::endl;
		std::cout << "-----------------------------" << std::endl;
		std::cout << std::endl;
		break;
	case 3:
		std::cout<<std::endl;
		std::cout << "-----------------------------" << std::endl;
		std::cout << "        Do zobaczenia        " << std::endl;
		std::cout << "-----------------------------" << std::endl;
		Sleep(1000);
		system("cls");
		break;
	default:
		break;
	}
}

