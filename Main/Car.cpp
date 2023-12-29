#include "Car.h"
#include <string>

Car::Car(std::string carBrand, std::string carModel, int dateProd, int horsePow)
{
	this->carBrand = carBrand;
	this->carModel = carModel;
	this->dateProd = dateProd;
	this->horsePow = horsePow;
}
