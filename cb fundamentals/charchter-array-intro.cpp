#include<iostream>
using namespace std;
void read(char ch3[],int max)
{
    int i=0;
    char ch=cin.get();
    while(ch!='\n')
    {
        ch3[i]=ch;
        i++;
        if(i== max-1){
            break;
        }
        ch=cin.get();
    }
    ch3[i]='\0';
}
int main()
{
    char ch[100];
    cin>>ch;
    cout<<ch<<endl;
    char ch1[]={"helllo nxnj"};
    cout<<ch1<<endl;
    char ch2[]={'a','b','c','d','\n'};
    cout<<ch2<<endl;
    char ch3[1000];
    read(ch3,1000);
    cout <<ch3<<endl;
    char ch4[1000];
    cin.getline(ch4,1000,'$');
    cout<<ch4;
}
