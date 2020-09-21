#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >>n;
    int b[n];
    for (int i=0;i<n;i++)
    {
        cin >>b[i];
    }
    int l=b[0];
    for(int i=0;i<n;i++)
    {
        if (l<b[i])
        {
            l=b[i];
        }
    }
    int c=0;
    for (int i=0;i<n;i++)
    {
        if (l==b[i])
        {
            c=c+1;
        }
    }
    cout <<c;


}
