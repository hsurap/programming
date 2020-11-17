#include<iostream>
using namespace std;
int fib(int i)
{
    if(i<=2) return 1;
    int x =fib(i-1)+fib(i-2);
    return x;
}
int main()
{
    int n;
    cin>>n;
    cout<<"0"<<" "<<"1"<<" ";
    for(int i=3;i<=n;i++)
    {
        cout<<fib(i)<<" ";
    }
}
