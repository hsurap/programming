#include<iostream>
using namespace std;
int main()
{
    int s;
    cin>>s;
    int x,y;
    cin>>x>>y;
    int ar[x][y];
    for(int i=0;i<x;i++)
    {
        for( int j=0;j<y;j++)
        {
            cin>>ar[i][j];
        }
    }
    cout <<endl;
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<y;j++)
        {
            cout<<ar[i][j];
        }
    }
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<y;j++)
        {
            if(ar[i][j]==s)
            {
                cout<<"yes";
                break;
            }
        }
    }
}
