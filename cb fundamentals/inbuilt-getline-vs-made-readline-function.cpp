#include<iostream>
using namespace std;
void readline(char a[],int mlen)
{
    int i=0;
    char ch=cin.get();
    while(ch!='\n')
    {
        a[i]=ch;
        i++;
        if(i==mlen-1)
            break;
        ch=cin.get();
    }
    a[i]='\0';
}
int main()
{
    char a[1000];
    readline(a,1000);
    cout<<a<<endl;
    char b[1000];
    cin.getline(b,1000,'$');
    cout <<b;
}
