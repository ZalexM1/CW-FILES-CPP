#pragma once
#include "Vehicle.h"

#include <iostream>
using namespace std;

class Scoter : public Vehicle
{
protected:

	bool throttleGrip;
	bool kickstarter;

public:

	Scoter();
	Scoter(bool tg, bool ks);

	void Print();
	void Init();
	virtual void MaxSpeed() const;
	virtual void FuelConsumption() const;
	virtual void WheelCount() const;
	virtual void Seats() const;
};