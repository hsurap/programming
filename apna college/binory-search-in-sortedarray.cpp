#include<iostream>
using namespace std;
int f(int a[],int n,int ser)
{
    int st=0,en=n;
    while(st<=en)
    {
        int mid=(st+en)/2;
        if(a[mid]==ser)
        {
            return mid;
        }
        else if(a[mid]>ser)
           {
               en=mid-1;
           }
        else{st=mid+1;}
    }
    return -1;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin >>a[i];
    }
    int ser;
    cin>>ser;
    cout <<f(a,n,ser);
}

