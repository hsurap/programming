#include<iostream>
using namespace std;
int main()
{
    int n,p;
    cin>>n>>p;
    float ans=1;
    float inc=1;
    int t=0;
    while(t<=p)
    {
        while(ans*ans<=n)
        {
            ans=ans+inc;
        }
        ans=ans-inc;
        inc=inc/10;
        t++;
    }
    cout <<ans;
}
