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
    int cs,ms=0;
    int l=-1,r=-1;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            cs=0;
            for(int k=i;k<=j;k++)
            {
                cs=cs+a[k];
            }
            if(cs>ms)
            {
                ms=cs;
                l=i;
                r=j;
            }
        }
    }
    cout <<"yours array is"<<endl;
    for(int i=l;i<=r;i++)
    {
        cout<<a[i]<<" ";
    }
    cout <<endl;
    cout<<"sum="<<ms;

}
