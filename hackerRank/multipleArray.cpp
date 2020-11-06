#include <iostream>
using namespace std;
int main()
{
  int a,b;
cin >>a;
cin >>b;
int marks [a][b];
for (int i=0;i<a;i++)
{
    for (int j=0;j<b;j++)
    {
        cin >>marks[i][j];
    }
    cout <<endl;
}
for (int i=0;i<a;i++)
{
    for (int j=0;j<b;j++)
    {
        cout <<marks[i][j];
    }
    cout <<endl;
}
}

