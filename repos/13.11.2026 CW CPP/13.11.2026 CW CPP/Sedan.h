#pragma once

#include "Vehicle.h"

#include <iostream>
using namespace std;

class Sedan : public Vehicle
{
protected:

	bool turbine;

public:
	Sedan();
	Sedan(bool turbine);

	void Print();
	void Init();


	virtual void MaxSpeed() const;
	virtual void FuelConsumption() const;
	virtual void WheelCount() const;
	virtual void Seats() const;
};