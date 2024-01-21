#pragma once
#ifndef CAR
#define CAR
#include <string>
#include <vector>
#include "Car.h"

class Car {
private:
	std::string carBrand;
	std::string carModel;
	int dateProd;
	int horsePow;
	static std::vector<Car> CarsArr;
public:
	Car(std::string carBrand, std::string carModel, int dateProd, int horsePow);
	std::string getBrand() const;
	std::string getModel() const;
	int getDateProd() const;
	int getHorsePow() const;
	static void insertCar();
	static bool showCars();
	static std::string chooseCar(std::string brand, std::string model);
	friend std::ostream& operator<< (std::ostream& stream, const Car& car);
	~Car() {};
};

#endif // !CAR
