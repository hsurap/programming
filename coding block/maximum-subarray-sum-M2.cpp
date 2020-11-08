#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >>n;
    int a[n];
    int cumsum[n];
    cin>>a[0];
    cumsum[0]=a[0];
    int ms=0;
    for(int i=1;i<n;i++)
    {
        cin>>a[i];
        cumsum[i]=cumsum[i-1]+a[i];
    }
    //cout<<cumsum[-1]<<endl;
    for(int i=0;i<n;i++)
    {
        int cs=0;
        for(int j=i;j<n;j++)
        {
            if(i==0)
                cs=cumsum[j];
            else
                cs=cumsum[j]-cumsum[i-1];
            if(cs>ms)
            {
                ms=cs;
            }
        }
    }
    cout <<ms;

}
