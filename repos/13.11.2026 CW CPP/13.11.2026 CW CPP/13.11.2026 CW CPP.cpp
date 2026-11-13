#include <iostream>
using namespace std;


class Scoter : public Vehicle
{
protected:

	bool throttleGrip;
	bool kickstarter;

public:

	Scoter();
	Scoter(bool tg, bool ks)
	{
		throttleGrip = tg;
		kickstarter = ks;
	}
};

class Bicycle : public Vehicle
{
protected:

	int pedals;
	bool basket;

public:

	Bicycl();
	Bicycl(int pd, bool bs)
	{
		pedals = pd;
		basket = bs;
	}
};

class Sedan : public Vehicle
{
protected:

	bool horsePower;
	bool turbine;
	int doors;

public:

	Seda();
	Seda(bool hp, bool tb, int dr)
	{
		horsePower = hp;
		turbine = tb;
		doors = dr;
	}
};

class Jee : public Vehicle
{
protected:

	bool spareTire;
	string tireType;

public:

	Jep();
	Jep(bool st, string tt)
	{
		spareTire = st;
		tireType = tt;
	}
};

class Bu : public Vehicle
{
protected:

	int seatCount;
	int floors;

public:

	Bu();
	Bu(int sc, int fl)
	{
		seatCount = sc;
		floors = fl;
	}
};

class Truc : public Vehicle
{
protected:

	double loadCapacity;
	double boxVolume;

public:

	Truc();
	Truc(double lc, double bv)
	{
		loadCapacity = lc;
		boxVolume = bv;
	}
};

int main()
{

}