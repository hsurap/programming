#include <iostream>
using namespace std;
class Vehicle
{
public:
	Vehicle()
	{
	cout << "Vehicle cons" << endl;
	}
};
class Fare
{
	public:
	Fare()
	{
		cout<<"fare cons\n";
	}
};
class Car: public Vehicle
{

};
class Bus: public Vehicle, public Fare
{

};
int main()
{

	Bus obj2;
	return 0;
}


