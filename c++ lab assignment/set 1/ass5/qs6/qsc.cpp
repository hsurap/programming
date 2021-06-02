#include <iostream>
using namespace std;
class Vehicle
{
public:
	Vehicle()
	{
	cout << "vehicle constructor" << endl;
	}
};
class fourWheeler: public Vehicle
{ public:
	fourWheeler()
	{
	cout<<"4wheeler constructor"<<endl;
	}
};

class Car: public fourWheeler{
public:
	car()
	{
	cout<<"Car has 4 Wheels"<<endl;
	}
};
int main()
{
	Car obj;
	return 0;
}
