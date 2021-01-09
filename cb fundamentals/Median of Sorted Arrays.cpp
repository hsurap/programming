#include<iostream>
using namespace std;
void funct(int a[],int b[],int n,int c[])
{
    int i=0;
    int j=0;
    int k=0;
    while(i<n&&j<n)
    {
        if(a[i]<=b[j])
        {
            c[k++]=a[i++];
        }
        else if(a[i]>b[j])
        {
            c[k++]=b[j++];
        }
    }
    while(i<n)
    {
        c[k++]=a[i++];
    }
    while(j<n)
    {
        c[k++]=b[j++];
    }
}
int main()
{
    int n;
    cin>>n;
    int a[n],b[n],c[2*n]={0};
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }
    funct(a,b,n,c);
    for(int i=0;i<2*n;i++)
    {
        cout<<c[i]<<" ";
    }
    cout<<endl;
    cout<<(c[n]+c[n+1])/2;
}
