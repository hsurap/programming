#include<iostream>
using namespace std;
int main()
{
    int a[100][100];
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    int sr=0,er=n-1,sc=0,ec=m-1;
    for(int i=sc;i<=ec;i++)
    {
        cout<<a[sr][i]<<" ";
    }
    sr++;
    for(int i=sr;i<=er;i++)
    {
        cout<<a[i][ec]<<" ";
    }
    ec--;
    if(er>sr)
    {
        for(int i=ec;i>=sc;i--)
        {
        cout<<a[er][i]<<" ";
        }
    er--;
    }
    if(ec>sc)
    {
        for(int i=er;i>=sr;i--)
        {
        cout<<a[i][sc]<<" ";
        }
    sc++;
    }
}
