#include<iostream>
using namespace std;
int main()
{
    int n;cin>>n;
    for(int i=1;i<=n;i++)
    {
        int a=n;
        for(int j=i;j>=1;j--)
        {
            cout<<a;
            a--;
        }
        for(int j=1;j<=2*(n-i)+1;j++)
        {
            cout<<" ";
        }
        int k=n-i+1;
        for(int j=1;j<=i;j++)
        {
            cout<<k;
            k++;
        }
        cout<<endl;
    }
}
