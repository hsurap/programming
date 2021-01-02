#include<iostream>
using namespace std;
int func(int a[],int n,int key)
{
    int pair=0;
    int s=0;
    int e=n-1;
    while(s<=e)
    {
        if(a[s]+a[e]==key)
        {
            pair++;
            s++;
            e--;
        }
        else if (a[s]+a[e]>key)
            e--;
        else
            s++;
    }
}
int main()
{
    int a[1000];
    int n,key;
    cin>>n>>key;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout << func(a,n,key);
}

