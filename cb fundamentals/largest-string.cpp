#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char ch[1000];
    char large[1000];
    int n;
    cin>>n;
    int len=0;
    int mlen=0;
    cin.get();
    for(int i=0;i<n;i++)
    {
        cin.getline(ch,1000);
        len=strlen(ch);
        if(mlen<len)
        {
            mlen=len;
            strcpy(large,ch);
        }
    }
    cout<<large<<" "<<mlen;
    //cin.getline(ch,1000);
    //cout<<ch;
}
