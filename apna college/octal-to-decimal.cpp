
#include<iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int c=0;
    int sum=0;
    for(int i=n;i>0;i=i/10)
    {
        int l=i%10;
        sum=sum+l*pow(8,c);
        c++;
    }
    cout <<sum;
}
