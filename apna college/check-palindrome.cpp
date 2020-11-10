#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char ch[n+1];
    cin>>ch;
    bool check=1;
    for(int i=0;i<n;i++)
    {
        if(ch[i]!=ch[n-1-i])
        {
            check =0;
            break;
        }
    }
    if(check==1)
        cout<<"yes";
    else cout<<"not";
}
