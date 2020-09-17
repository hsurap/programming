#include <iostream>
using namespace std;
// cylinder
float vol(int r,int h)
{
    return 3.14*r*r*h;
}
//cube
int vol (int a)
{
    return a*a*a;
}
int vol(int l,int b,int h)
{
    return l*b*h;
}
int main ()
{
    cout <<vol(5)<<endl<<vol(1,1)<<endl<<vol(1,2,3);
}
