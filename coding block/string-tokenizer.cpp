#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char s[]="hello, everybody ,Myself Parush";
    char *ptr;
    ptr=strtok(s," ");
    cout<<ptr;
}
