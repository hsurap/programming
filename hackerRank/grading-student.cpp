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
    for(int i=0;i<n;i++)
    {
        cout <<a[i]<<" ";
    }
    cout <<endl;
    for(int i=0;i<n;i++)
    {
        if (a[i]<38)
        {
            a[i]=a[i];
        }
        else if(a[i]%5<3)
        {
            a[i]=a[i];
        }
        else if(a[i]%5==3)
        {
            a[i]=a[i]+2;
        }
        else
        {
            a[i]=a[i]+1;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout <<a[i]<<" ";
    }


}
