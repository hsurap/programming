#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int c=1;
        for(int j=1;j<=n-i;j++)
        {
            cout <<c;
            c++;
        }
        cout <<endl;
    }
}
