#include<iostream>
using namespace std;
class vehicle{
private:
    int speed;
public:
    string color;
protected:
    int numtyres;
};
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
