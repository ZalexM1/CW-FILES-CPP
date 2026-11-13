#include "Vehicle.h"

#include <iostream>
using namespace std;

class Scooter : public Vehicle
{
protected:

	bool throttleGrip;
	bool kickstarter;

public:
	Scooter();
	Scooter(bool tg, bool ks)
	{
		throttleGrip = tg;
		kickstarter = ks;
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
		cout << "Max speed: 55 km/h" << endl;
	}
	virtual void FuelConsumption() const
	{
		cout << "Fuel consumption: yes liters per 100 km" << endl;
	}
	virtual void WheelCount() const
	{
		cout << "Whel count: 2 wheels" << endl;
	}
	virtual void Seats() const
	{
		cout << "Seat count: 2 seats" << endl;
	}
};
