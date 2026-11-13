#pragma once

#include "Vehicle.h"

#include <iostream>
using namespace std;

class Bicycle : public Vehicle
{
protected:

	bool pedals;

public:
	Bicycle();
	Bicycle(int pd);

	void Print();
	void Init();

	virtual void MaxSpeed() const;
	virtual void FuelConsumption() const;
	virtual void WheelCount() const;
	virtual void Seats() const;
};