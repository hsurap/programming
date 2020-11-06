#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >>n;
    int digonal[n][n];
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            cin >>digonal[i][j];
        }
    }
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            cout <<digonal[i][j];
        }
        cout <<endl;
    }
    int d1=0;
    for (int i=0;i<n;i++)
        {
             d1=d1+digonal[i][i];
        }
    cout <<d1<<endl;
    int d2=0;
    for (int i=0;i<n;i++)
    {
        d2=d2+digonal[i][n-1-i];
    }
    cout <<d2<<endl;
    if (d2>d1)
    {
        cout <<d2-d1;
    }
    else {cout << d1-d2;}

}


