#include <iostream>
using namespace std;
int main()
{
    int n,p;
    cin >>n>>p;
    int l=p/2;
    int r;
    if (n%2==0)
    {
        r=(n+1-p)/2;
    }
    else
    {
        r=(n-p)/2;
    }
    if (l<r)
    {
        cout <<l;
    }
    else {cout <<r;}

}

