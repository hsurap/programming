#include <iostream>
using namespace std;
int main()
{
    int n,s=0;
    cin >>n;
    int ar[n];
    {
        for (int i=0;i<n;i++)
        {
            cin >>ar[i];
        }
    }
    for (int i=0;i<n;i++)
    {
        s=s+ar[i];
    }
    cout <<s;
}
