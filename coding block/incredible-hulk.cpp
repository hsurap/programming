#include<iostream>
using namespace std;
int main()
{
    int no;
    cin>>no;
    int ans=0;
    while(no>0)
    {
        ans=ans+(no&1);
        no=no>>1;
    }
    cout<<ans;
}
