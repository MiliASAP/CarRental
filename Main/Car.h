#pragma once
#ifndef CAR
#define CAR
#include <string>
#include "Car.h"

class Car {
private:
	std::string carBrand;
	std::string carModel;
	int dateProd;
	int horsePow;
public:
	Car(std::string carBrand, std::string carModel, int dateProd, int horsePow);
	~Car() {};
};
#endif // !CAR
