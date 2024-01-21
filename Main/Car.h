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
	std::string getBrand() const;
	std::string getModel() const;
	int getDateProd() const;
	int getHorsePow() const;
	friend std::ostream& operator<< (std::ostream& stream, const Car& car);
	~Car() {};
};
#endif // !CAR
