#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int inc=1;
    int dec=1;
    if(n<=1)
    {
        return n;
    }
    for(int i=1;i<n;i++)
    {
        if(a[i]>=a[i-1])
        {
            inc++;
        }
        if(a[i]<a[i-1])
        {
            dec++;
        }
    }
    cout<<inc<<" "<<dec<<endl;
    cout<<inc+dec-1;
}
