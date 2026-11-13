#include "Vehicle.h"

#include <iostream>
using namespace std;

class Bicycle : public Vehicle
{
protected:

	bool pedals;

public:
	Bicycle();
	Bicycle(int pd)
	{
		pedals = pd;
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
		cout << "Max speed: 35 km/h" << endl;
	}
	virtual void FuelConsumption() const
	{
		cout << "Fuel consumption: 15 burgers liters per 100 km" << endl;
	}
	virtual void WheelCount() const
	{
		cout << "Whel count: 2 wheels" << endl;
	}
	virtual void Seats() const
	{
		cout << "Seat count: 1 seats" << endl;
	}
};