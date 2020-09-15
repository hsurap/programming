#include <iostream>
using namespace std;
void fib(int n)
{
    int a=0;
    int b=1;
    for (int i=0;i<n;i++)
    {
        int s=a+b;
        cout <<s<<endl;
        a=b;
        b=s;

    }
}
int main ()
{
    int n;
    cin>>n;
    fib(n);
}



