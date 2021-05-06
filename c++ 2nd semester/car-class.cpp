#include<iostream>
using namespace std;
#include "vehicle-class.cpp"
class car:public vehicle{
public:
    int numgears;
    void print()
    {
        //cout<<speed<<endl;
        cout<<color<<endl;
        cout<<numtyres<<endl;
        cout<<numgears<<endl;
    }
};
