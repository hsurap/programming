#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n==1) cout<<"not";
    if (n==2) cout<<"yes";
    int i;
    for(i=2;i*i<=n;i=i+2)
    {
        if(n%i==0)
        {
            cout<<"no";
            break;
        }
    }
    if(i*i>n)
        cout<<endl<<"yes";
}
