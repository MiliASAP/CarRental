#include "Car.h"
#include <vector>
#include <string>
#include <iostream>

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
	stream << car.getBrand() << std::endl << car.getModel() << std::endl << car.getDateProd() << std::endl << car.getHorsePow() << std::endl;
	return stream;
}
