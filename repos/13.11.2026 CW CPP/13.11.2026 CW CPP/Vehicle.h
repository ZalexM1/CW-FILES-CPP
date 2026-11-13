#pragma once

#include "string"

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
	Vehicle(int wh, string md, string cl, int yr, double pr, double sp);

	void Print();
	void Init();

	void SpeedUp();
	void SlowDown();
	void ToggleEngine();
	void ToggleDoor();
	virtual void MaxSpeed() const;
	virtual void FuelConsumption() const;
	virtual void WheelCount() const;
	virtual void Seats() const;
};
