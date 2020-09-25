#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin >>a[i];
    }
    int f=a[0],q=a[0];
    int mi=0,ma=0;
    for (int i=1;i<n;i++)
    {
        if (f<a[i])
        {
            ma++;
            f=a[i];
        }
    }
    for (int i=1;i<n;i++)
    {
        if (q>a[i])
        {
            mi++;
            q=a[i];
        }

    }
    cout <<ma<<" "<<mi;
}
