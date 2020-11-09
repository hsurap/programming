#include<iostream>
using namespace std;
int main()
{
    char c[50];
    cin >>c;
    int i=0;
    if(c[i]==9)
        i++;
    int d;
    for(;c[i]!='\0';i++)
    {
        d=c[i]-'0';
        if(d>=5)
            c[i]='9'-d;
    }
    cout <<c;
}
