#include <iostream>
using namespace std;
int main()
{
    int n,p; //p=no of decimal places
    cin >>n>>p;
    float ans=0;
    float inc =1;
    for (int i=0;i<=p;i++)
    {
        for (int j=0;ans*ans<=n;j++)
        {
            ans=ans+inc;
        }
        ans=ans-inc;
        inc=inc/10;
    }
    cout <<ans;
}
