#include<iostream>
using namespace std;
/*void bsort(int a[],int n)
{
    if (n==1)
        return;
    for (int i=0;i<n-1;i++)
    {
        if(a[i]>a[i+1])
            swap(a[i],a[i+1]);
    }
    bsort(a,n-1);
}*/
void bsort1(int a[],int j,int n)
{
    if (n==1)
        return;
    if(j==n-1)
        bsort1(a,0,n-1);
    if(a[j]>a[j+1])
        swap(a[j],a[j+1]);
    bsort1(a,j+1,n);
}
int main()
{
    //int a[100];
    int n;cin>>n;
    /*for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    bsort(a,n);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }*/
    int b[100];
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }
    bsort1(b,0,n);
    for(int i=0;i<n;i++)
    {
        cout<<b[i]<<" ";
    }
}
