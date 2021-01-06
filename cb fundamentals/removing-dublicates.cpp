#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char a[100];
    cin>>a;
    int l=strlen(a);
    int pointer =0;
    for(int i=1;i<l;i++)
    {
        if(a[i]!=a[pointer])
        {
            pointer++;
            a[pointer]=a[i];
        }
    }
    a[pointer+1]='\0';
    cout<<a;
}

