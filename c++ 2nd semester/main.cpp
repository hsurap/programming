#include<iostream>
using namespace std;
#include "vehicle-class.cpp"
#include "car-class.cpp"
int main()
{
    vehicle v;
    v.color="blue";
    //v.speed=10;
    //v.numtyres=20;
    car c;
    c.color="blue";
    c.speed=20;
    c.numtyres=10;
    c.numgears=30;
    c.print();
}
