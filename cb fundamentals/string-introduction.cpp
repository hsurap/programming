#include<bits/stdc++.h>
#include <string>
using namespace std;
int main()
{
    string s1("hello ");
    string s2=("everyone");
    string s3=s2;
    string s4(s1);
    char ch[]={'a','b','c','\0'};
    string s5(ch);
    string s6;
    cout <<s1<<" "<<s2<<" "<<s3<<" "<<s4<<" "<<s5<<" "<<endl;
    if(s6.empty())
    {
        cout<<"empty"<<endl;
    }
    s1.append("parush");
    cout<<s1<<endl;
    s1=s1+" and other ";
    cout<<s1<<endl;
    cout<<s2.length()<<endl;
    s2.clear();
    cout<<s2.length()<<endl;
    string s7="tom";
    string s8="dome";
    cout <<s7.compare(s8)<<endl;
    cout <<s8.compare(s7)<<endl;
    cout <<s7.compare(s7)<<endl;
    if(s7>s8)
    {
        cout<<"tom"<<endl;
    }
    else{
        cout<<"dome"<<endl;
    }
    int l=s8.size();//s8.length()
    for(int i=0;i<l;i++)
    {
        cout<<s8[i]<<" ";
    }
    cout <<endl;
    for(auto i=s8.begin();i!=s8.end();i++)
    {
        cout<<*i<<" ";
    }
    cout <<endl;
    for(auto i:s8)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    string s9="wanted to be a best coder";
    int indx=s9.find("best");
    cout<<indx<<endl;
    string s10="i want to have apple juice";
    int indx1=s10.find("apple");
    string word="apple";
    int len=word.length();
    s10.erase(indx1,len+1);
    cout<<s10;

}

