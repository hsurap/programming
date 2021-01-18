#include<iostream>
using namespace std;
void merge(int a[],int si,int ei)
{
    int mid=(si+ei)/2;
    int size=ei-si+1;
    int *arr=new int[size];
    int i=si;
    int j=mid+1;
    int k=0;
    while(i<=mid&&j<=ei)
    {
        if(a[i]<a[j])
        {
            arr[k++]=a[i++];
        }
        else{
            arr[k++]=a[j++];
        }
    }
    while(i<=mid)
    {
        arr[k++]=a[i++];
    }
    while(j<=ei)
    {
        arr[k++]=a[j++];
    }
    int m=0;
    for(int i=si;i<=ei;i++)
    {
        a[i]=arr[m];
        m++;
    }
    delete []arr;
}
void merge_sort(int a[],int si,int ei)
{
    if(si>=ei)
    {
        return;
    }
    int mid=(si+ei)/2;
    merge_sort(a,si,mid);
    merge_sort(a,mid+1,ei);
    merge(a,si,ei);
}
int main()
{
    int a[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    merge_sort(a,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
