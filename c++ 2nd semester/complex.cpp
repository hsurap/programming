#include<iostream>
using namespace std;
class complex{
private:
    int real;
    int img;
public:
    complex(int real,int img)
    {
        this->real=real;
        this->img=img;
    }
    void print()
    {
        cout<<real<<"+"<<img<<"i"<<endl;
    }
    void add(complex c2)
    {
        this->real=this->real+c2.real;
        this->img=this->img+c2.img;
    }
    void multiply(complex c2)
    {
        this->real= this->real*c2.real - (this->img*c2.img);
        this->img= this->img*c2.real + this->real*c2.img;
    }
};
