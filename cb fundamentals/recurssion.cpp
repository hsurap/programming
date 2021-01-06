#include<iostream>
using namespace std;
int Lsearch(int a[],int n,int key,int i)
{
    if(i==n)
        return -1;
    if(a[i]==key)
        return i;
    Lsearch(a,n,key,i+1);
}
int Bsearch(int a[],int e,int key,int s)
{
    if(s>=e)
        return -1;
    int m=(s+e)/2;
    if(a[m]==key)
        return m;
    else if(a[m]>key)
        Bsearch(a,m-1,key,0);
    else
        Bsearch(a,e,key,m+1);
}
int main()
{
    int a[100];
    int n,key;
    cin>>n>>key;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int e=n-1;
    cout<<Bsearch(a,e,key,0)<<endl;
    cout<<Lsearch(a,n,key,0)<<endl;
}
