#include <iostream>
using namespace std;
int main()
{
    int marks [4]={10,15,20,25};
    int *p=marks;
    cout <<marks[0]<<endl;
    cout <<marks[1]<<endl;
    cout <<marks[2]<<endl;
    cout <<marks[3]<<endl;
    cout <<p<<endl;
    cout <<*p<<endl<<*(p+1)<<endl<<*(p+2)<<endl<<*(p+3)<<endl;
    cout <<*(p++)<<endl<<*(++p);


}
