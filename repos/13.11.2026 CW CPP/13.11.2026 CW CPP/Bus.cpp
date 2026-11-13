#pragma once

#include "Vehicle.h"

#include <iostream>
using namespace std;

class Bus : public Vehicle
{
protected:

	int modification;

public:
	Bus();
	Bus(int mod)
	{
		modification = mod;
	}

	void Print()
	{
		cout << "Wheels: " << wheels << endl;
		cout << "Model: " << model << endl;
		cout << "Color: " << color << endl;
		cout << "Year: " << year << endl;
		cout << "Price: " << price << endl;
		cout << "Speed: " << speed << endl;
	}

	void Init()
	{
		wheels = 0;
		model = " ";
		color = " ";
		year = 1999;
		price = 1;
		speed = 0;
	}

	virtual void MaxSpeed() const
	{
		cout << "Max speed: 65 km/h" << endl;
	}
	virtual void FuelConsumption() const
	{
		cout << "Fuel consumption: 20 liters per 100 km" << endl;
	}
	virtual void WheelCount() const
	{
		cout << "Whel count: 4 wheels" << endl;
	}
	virtual void Seats() const
	{
		cout << "Seat count: 21 seats" << endl;
	}
};