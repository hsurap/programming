#include <iostream>
using namespace std;
class Vehicle
{
public:
	Vehicle()
	{
	cout << "Vehicle constructor" << endl;
	}
};
class Car: public Vehicle
{

};
class Bus: public Vehicle
{

};
int main()
{
	Car obj1;
	Bus obj2;
	return 0;
}

