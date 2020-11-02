#include<iostream>
#include <math.h>0
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a=n;
    int cnt=0;
    for(int i=n;i>0;i=i/10)
    {
        cnt++;
    }
    int sum =0;
    for(int i=n;i>0;i=i/10)
    {
        int ls=i%10;
        sum=sum+pow(ls,cnt);
    }
    if (sum==a)
        cout <<"armstrong no";
    else{cout <<"not";}
}
