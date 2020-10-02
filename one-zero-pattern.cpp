#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >>n;
    for(int i=1;i<=n;i++)
    {
        int val=i&1;
        for(int j=1;j<=i;j++)
        {
            cout <<val;
            val=1-val;
        }
        cout <<endl;
    }
}
