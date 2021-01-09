#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    int sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    cout<<sum<<endl;
    int cs=0;
    int ms=0;
    for(int i=0;i<n;i++)
    {
        cs+=a[i];
        if(cs<0)
        {
            cs=0;
        }
        ms=max(cs,ms);
    }
    cout<<ms<<endl;
    for(int i=0;i<n;i++)
    {
        a[i]=-1*a[i];
    }
    int cs1=0;
    int ms1=0;
    for(int i=0;i<n;i++)
    {
        cs1+=a[i];
        if(cs1<0)
        {
            cs1=0;
        }
        ms1=max(cs1,ms1);
    }
    cout<<ms1<<endl;
    int cs2=sum+ms1;
    int maxx=max(cs2,ms);
    cout<<maxx;
}
