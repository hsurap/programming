#include<iostream>
using namespace std;
#include "complex.cpp"
int main()
{
    complex c1(0,4);
    complex c2(2,1);
    int c;
    cin>>c;
    if(c==1)
    {
        c1.add(c2);
        c1.print();
    }
    else{
        c1.multiply(c2);
        c1.print();
    }
}
