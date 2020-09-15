#include <iostream>
using namespace std;
void prime(int n)
{
    int q=0;
    for (int i=2;i<n;i++)
    {
        if (n%i==0)
        {
            q=q+1;
        }
    }
    if (q>=1)
    {
        cout <<"not a prime no";
    }
    else {cout <<"prime no ";}
}
int main()
{
    int n;
    cin >>n;
    prime(n);
}
