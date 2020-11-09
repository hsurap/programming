#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int rs;
    cin>>rs;
    int s=0,e=n-1;
    while(s<e)
    {
        if(a[s]+a[e]==rs)
        {
            cout<<"yes";
            cout <<a[s]<<" "<<a[e];
            break;
        }
        else if(a[s]+a[e]<rs)
            s++;
        else {e--;}
    }
}
