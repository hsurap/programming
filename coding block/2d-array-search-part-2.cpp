#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int x,y;
    cin>>x>>y;
    int ar[x][y];
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<y;j++)
        {
            cin>>ar[i][j];
        }
    }
    for(int i=0;i<x;i++)
    {
        int s=0,e=y-1;
        while(s<=e)
        {
            int m=(s+e)/2;
            if(ar[i][m]==n)
            {
                cout<<"yes";
                break;
            }
            else if(ar[i][m]<n)
                 s=m+1;
            else
                    e=m-1;
        }
    }
}
