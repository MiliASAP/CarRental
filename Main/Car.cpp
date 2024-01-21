#include "Car.h"
#include <vector>
#include <string>
#include <sstream>
#include <iostream>

std::vector<Car> Car::CarsArr;

Car::Car(std::string carBrand, std::string carModel, int dateProd, int horsePow)
{
	this->carBrand = carBrand;
	this->carModel = carModel;
	this->dateProd = dateProd;
	this->horsePow = horsePow;
}

std::string Car::getBrand() const
{
	return carBrand;
}

std::string Car::getModel() const
{
	return carModel;
}

int Car::getDateProd() const
{
	return dateProd;
}

int Car::getHorsePow() const
{
	return horsePow;
}

std::ostream& operator<<(std::ostream& stream, const Car& car)
{
	stream <<"Marka: " << car.getBrand() << std::endl <<"Model: " << car.getModel() << std::endl <<"Rok produkcji: " << car.getDateProd() << std::endl <<"Moc: " << car.getHorsePow() << std::endl;
	return stream;
}



void Car::insertCar()
{
	std::string car_Brand;
	std::string car_Model;
	int date_Prod;
	int horse_Pow;
	std::cout << "Wprowadz marke samochodu:" << std::endl;
	std::cin >> car_Brand;
	system("cls");
	std::cout << "Wprowadz model samochodu:" << std::endl;
	std::cin >> car_Model;
	system("cls");
	std::cout << "Wprowadz rok wyprodukowania samochodu:" << std::endl;
	std::cin >> date_Prod;
	system("cls");
	while (date_Prod < 1890 || date_Prod > 2024) {
		std::cout << "Wprowadzony rok jest niepoprawny. Zmien aby przejsc dalej" << std::endl;
		std::cin >> date_Prod;
		system("cls");
	}
	system("cls");
	std::cout << "Wprowadz ilosc koni mechanicznych samochodu:" << std::endl;
	std::cin >> horse_Pow;
	while (horse_Pow < 0) {
		std::cout << "Wartosc mocy samochodu nie moze byc ujemna" << std::endl;
		std::cin >> horse_Pow;
		system("cls");
	}
	system("cls");

	CarsArr.push_back(Car(car_Brand, car_Model, date_Prod, horse_Pow));
}

bool Car::showCars() {
	if (CarsArr.empty() == true) {
		return true;
	}
	else {
		for (int i = 0; i < CarsArr.size(); i++) {
			std::cout << CarsArr[i] << std::endl;
		}
		return false;
	}
}

std::string Car::chooseCar(std::string brand, std::string model)
{
	std::string chosenCar;
	for (auto it = CarsArr.begin(); it != CarsArr.end(); ++it) {
		if (it->getBrand() != brand ) {
			std::cout << "Nie posiadamy podanej marki samochodu"<<std::endl;
			break;
		}
		else {
			if (it->getModel() != model) {
				std::cout << "Nie posiadamy podanego modelu samochodu" << std::endl;
				break;
			}
			else {
				std::stringstream ss;
				ss << "\nMarka: " << it->getBrand() << "\nModel: " << it->getModel() << "\nData Produkcji: " << it->getDateProd() << "\nMoc: " << it->getHorsePow()<<"\n";
				chosenCar = ss.str();
				CarsArr.erase(it);
				break;
			}
		}
	}
	return chosenCar;
}






