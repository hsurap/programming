#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum;
    cin>>n>>sum;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int br;
    for(int i=0;i<n;i++)
    {
        int s=0,c=0;
        for(int j=i;j<n;j++)
        {
           s+=a[j];
           c++;
           if(sum==s)
           {
               cout <<i<<" "<<c+i;
                br=1;
               break;
           }
        }
        if(br==1)
            break;
    }

}
