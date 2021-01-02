#include<iostream>
using namespace std;
void sorting (int a[],int n)
{
    for(int i=1;i<n;i++)
    {
        int current_element=a[i];
        int j;
        for( j=i-1;(j>=0)&&(current_element<a[j]);j--)
        {
           a[j+1]=a[j];
        }
        j++;
        a[j]=current_element;
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
    sorting (a,n);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
