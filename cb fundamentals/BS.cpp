#include<iostream>
using namespace std;
int main()
{
    int a[100];
    int n,key;
    cin>>n>>key;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int s=0;
    int e=n-1;
    int b=1;
    while(s<=e)
    {
        int m=(s+e)/2;
        if (a[m]==key)
        {
            cout<<"found";
            b=0;
            break;
        }
        else if(a[m]>key)
            e=m-1;
        else
            s=m+1;
    }
    if(b==1)
    {
        cout<<"not found";
    }
}
