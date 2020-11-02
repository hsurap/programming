#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >>n;
    int x=0,a=1,b=2;
    while(x<=n)
    {
        int c=a+b;
        cout <<c<<endl;
        x++;
        a=b;
        b=c;
    }

}
