#include<iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sum=0,c=0;
    for(int i=n;i>0;i=i/8)
    {
        int r=i%8;
        sum=sum+r*pow(10,c);
        c++;
    }
    cout <<sum;
}

