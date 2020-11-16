#include<iostream>
using namespace std;
int main()
{
    int no;
    cin>>no;
    int ans=0;
    while(no>0)
    {
        ans++;
        no=no&(no-1);
    }
    cout <<ans;
}
