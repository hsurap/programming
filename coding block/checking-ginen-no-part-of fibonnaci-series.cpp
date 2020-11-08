#include<iostream>
using namespace std;
int main()
{
    int s;
    cin>>s;
    int a=0,b=1;
    int c=a+b;
    int m=0;
    while(c<=s)
    {
        m++;
        if(c==s)
        {
            cout<<"part of fibonnaci series";
            break;
        }
        a=b;
        b=c;
        c=a+b;
    }
}
