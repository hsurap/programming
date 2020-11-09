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
    int ms=-1;
    for(int i=0;i<n;i++)
    {
        int cs=0;
        for(int j=i;j<n;j++)
        {
            cs=cs+a[j];
            ms=max(ms,cs);

        }
    }
    cout <<ms;
}
