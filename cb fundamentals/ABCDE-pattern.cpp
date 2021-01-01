#include<iostream>
using namespace std;
void func(int n)
{
    for(int i=1;i<=n;i++)
    {
        char ch ='A';
        for(int j=1;j<=n+1-i;j++)
        {
            cout<<ch;
            ch=ch+1;
        }
        cout<<endl;
    }
}
int main()
{
    int n;
    cin>>n;
    func(n);
}
