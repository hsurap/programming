#include<iostream>
#include<string.h>
using namespace std;
bool func (char ch[])
{
    int i=0;
    int e=strlen(ch)-1;
    while(i<=e)
    {
        if(ch[i]==ch[e])
        {
            i++;
            e--;
        }
        else{
            return false;
        }
    }
    return true;
}
int main()
{
    char ch[1000];
    cin.getline(ch,1000);
    //ch=cin.get();
    cout<<func(ch);
}
