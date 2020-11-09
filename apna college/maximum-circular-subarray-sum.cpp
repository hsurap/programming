#include<iostream>
using namespace std;
int kadane(int arr[],int n)
    {
        int cs=0;
        int ms=-1;
        for(int i=0;i<n;i++)
        {
           cs=max(0,cs+arr[i]);
           ms=max(ms,cs);
        }
        return ms;
    }
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
    int nw=kadane(a,n);
    for(int i=0;i<n;i++)
    {
        a[i]=-a[i];
    }
    int w=sum+kadane(a,n);
    cout <<max(nw,w);


}
