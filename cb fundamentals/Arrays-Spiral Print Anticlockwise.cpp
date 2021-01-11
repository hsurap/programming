#include<iostream>
using namespace std;
int main()
{
    int row,col;
    cin>>row>>col;
    int a[row][col];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cin>>a[i][j];
        }
    }
    int sr=0,er=row-1,sc=0,ec=col-1;
    while(sr<=er&&sc<=ec)
    {
        for(int i=sr;i<=er;i++)
        {
            cout<<a[i][sc]<<" ";
        }
        sc++;
        for(int i=sc;i<=ec;i++)
        {
            cout<<a[er][i]<<" ";
        }
        er--;
        for(int i=er;i>=sr;i--)
        {
            cout<<a[i][ec]<<" ";
        }
        ec--;
        for(int i=ec;i>=sc;i--)
        {
            cout<<a[sr][i]<<" ";
        }
        sr++;
    }
}
