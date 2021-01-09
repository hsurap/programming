#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,key;
    cin>>n>>key;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    int count =0;
    for(int i=0;i<n;i++)
    {
        int s=i+1;
        int e=n-1;
        while(s<e)
        {
            if(a[i]+a[s]+a[e]==key)
            {
                count++;
                cout<<a[i]<<" "<<a[s]<<" "<<a[e]<<" "<<endl;
                s++;
                e--;
            }
            else if(a[i]+a[s]+a[e]>key)
            {
                e--;
            }
            else{
                s++;
            }
        }
    }
    cout <<count;
}

