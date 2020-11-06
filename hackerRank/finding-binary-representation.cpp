#include <iostream>
using namespace std;
int main()
{
    int n,i=0;
    cin >>n;
    int arr[15];
    for (;n>0;i++)
    {
        arr[i]=n%2;
        n=n/2;
    }
    for (int j=i;j>=0;j--)
    {
        cout <<arr[j];
    }

}
