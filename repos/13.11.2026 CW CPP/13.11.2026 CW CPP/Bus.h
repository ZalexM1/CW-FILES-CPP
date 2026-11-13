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
	Bus(int mod);

	void Print();
	void Init();


	virtual void MaxSpeed() const;
	virtual void FuelConsumption() const;
	virtual void WheelCount() const;
	virtual void Seats() const;
};