#pragma once
#include <string>
#include "Car.h"
#ifndef CAR
#define CAR

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
