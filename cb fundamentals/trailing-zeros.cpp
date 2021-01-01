#include<iostream>
using namespace std;
int func(int n)
{
    int ans=0;
    for(int d=5;n/d>=1;d=d*5)
    {
        ans+=n/d;
    }
    return ans;
}
int main()
{
    int n;
    cin>>n;
    cout <<func(n);
}
