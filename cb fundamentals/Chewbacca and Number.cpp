#include<iostream>
using namespace std;
int main()
{
    char ch[100];
    cin>>ch;
    int i=0;
    if (ch[i]=='9')
    {
        i++;
    }
    for(;i<100;i++)
    {
        int no=ch[i]-'0';
        if(no>=5)
        {
            no=9-no;
            ch[i]=no+'0';
        }
    }
    cout<<ch;
}
