#include <iostream>
#include <chrono>
#include <Windows.h>

int main()
{
	std::cout << "          ______     _" << std::endl;
	std::cout << "    ____ /_____|____/ " << std::endl;
	std::cout << "   /____(O)___|_(O)_|" << std::endl;
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
	std::cin >> userChoose;
	system("cls");
	switch (userChoose)
	{
	case 1:
		std::cout << std::endl;
		std::cout << "-----------------------------" << std::endl;
		std::cout << "      Witamy wlasciciela     " << std::endl;
		std::cout << "-----------------------------" << std::endl;
		break;
	case 2:
		std::cout << std::endl;
		std::cout << "-----------------------------" << std::endl;
		std::cout << "        Witaj kliencie       " << std::endl;
		std::cout << "-----------------------------" << std::endl;
		break;
	case 3:
		std::cout<<std::endl;
		std::cout << "-----------------------------"<<std::endl;
		std::cout << "        Do zobaczenia        " << std::endl;
		std::cout << "-----------------------------" << std::endl;
		Sleep(1000);
		system("cls");
		break;
	default:
		break;
	}
}

