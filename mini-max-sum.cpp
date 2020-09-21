#include<iostream>
using namespace std;
int main()
{
    int mini[5];
       for (int i=0;i<5;i++)
       {
           cin >>mini[i];
       }
    int l=mini[0];
    for (int i=1;i<5;i++)
    {
        if (l<mini[i])
        {
            l=mini[i];
        }
    }
    int s1=0;
    for (int i=0;i<5;i++ )
    {
        s1=s1+mini[i];
    }
    cout <<s1-l<<endl;
     int p=mini[0];
    for (int i=1;i<5;i++)
    {
        if (p>mini[i])
        {
            p=mini[i];
        }
    }
    cout <<s1-p;

}
