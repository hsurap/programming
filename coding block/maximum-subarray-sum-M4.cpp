#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int cs=0,ms=0;
    for(int i=0;i<n;i++)
    {
        cs=max(0,cs+a[i]);
        ms=max(cs,ms);
    }
    cout <<ms;
}
