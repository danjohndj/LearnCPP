#pragma hdrstop
#pragma argsused

#include <stdio.h>
#include <iostream>

// inheritance

using namespace std;

class Fish
{
	protected:
		bool isFreshWaterFish;

	public: // constructor
		Fish(bool isFreshWater) : isFreshWaterFish(isFreshWater){}

	void Swim()
	{
		if (isFreshWaterFish)
			cout << "Swims in Lake" << endl;
		else
			cout << "Swims in sea" << endl;

	} // swim
}; // fish

	class Tuna: public Fish
	{
		public:
		Tuna() : Fish(false) {}

	};

	class Carp: public Fish
	{
	   public:
	   Carp() : Fish(true) {} // constructor
	};

	 // program start
	int main()
	{
		Carp myLunch;
		Tuna myDinner;

		myLunch.Swim();
		myDinner.Swim();

		return 0;

	}



