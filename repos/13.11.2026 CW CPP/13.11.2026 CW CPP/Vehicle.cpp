#include "Vehicle.h"
#include <iostream>

using namespace std;

class Vehicle
{
protected:

	int wheels;
	string model;
	string color;
	int year;
	double price;
	double speed;

public:
	Vehicle();
	Vehicle(int wh, string md, string cl, int yr, double pr, double sp)
	{
		wheels = wh;
		model = md;
		color = cl;
		year = yr;
		price = pr;
		speed = sp;
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

	void SpeedUp()
	{
		speed += 10;
		cout << "Sped up";
	}

	void SlowDown()
	{
		speed -= 10;
		cout << "Slowed down";
	}

	bool ToggleEngine()
	{
		bool status = 0;
		if (status == 0)
			cout << "Engine started";
		else
			cout << "Engine stopped";
	}

	bool ToggleDoor()
	{
		bool status = 0;
		if (status == 0)
			cout << "Door opened";
		else
			cout << "Door closed";
	}

	virtual void MaxSpeed() const = 0;
	virtual void FuelConsumption() const = 0;
	virtual void WheelCount() const = 0;
	virtual void Seats() const = 0;
};