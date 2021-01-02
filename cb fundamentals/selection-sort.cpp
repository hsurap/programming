#include<iostream>
using namespace std;
void sort(int a[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int min_i=i;
        for(int j=i+1;j<n;j++)
        {
            if (a[j]<a[min_i])
                min_i=j;
        }
        swap(a[i],a[min_i]);
    }
}
int main()
{
    int a[1000];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort (a,n);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
