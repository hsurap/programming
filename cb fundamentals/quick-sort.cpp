#include<iostream>
using namespace std;
int partition(int a[],int si,int ei)
{
    int first_element=a[si];
    int count =0;
    for(int i=si+1;i<=ei;i++)
    {
        if(a[i]<=first_element)
        {
            count++;
        }
    }
    int partition_index=si+count;
    swap(a[si],a[partition_index]);
    int i=si;
    int j=ei;
    while(i<partition_index&&j>partition_index)
    {
        if(a[i]<=first_element)
        {
            i++;
        }
        else if(a[j]>first_element)
        {
            j--;
        }
        else{
            swap(a[i],a[j]);
            i++,j--;
        }
    }
    return partition_index;
}
void quick_sort(int a[],int si,int ei)
{
    if(si>=ei)
    {
        return ;
    }
    int p=partition(a,si,ei);
    quick_sort(a,si,p-1);
    quick_sort(a,p+1,ei);
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
    quick_sort(a,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
