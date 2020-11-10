#include<iostream>
#include<string>
using namespace std;
int main()
{
/*
    int n;
    cin>>n;
    char ch[n+1];
    cin>>ch;
    cout<<ch<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<ch[i]<<" ";
    }
    int a,b;
    cin>>a>>b;
    char cha[a][b];
    for(int i=0;i<a;i++)
    {
            cin>>cha[i];
    }
    cout <<endl;
    for(int i=0;i<a;i++)
    {
            cout<<cha[i];
    }

*/
    string s("hello world");
    cout <<s<<endl;
    cout <<s.legnth()<<endl;
    string s1="another way";
    cout <<s1<<endl;
    string s3;
    getline(cin,s3);
    cout <<s3<<endl;
    string s4[4]={"aps","djd","efsd","gddg"};
    for(int i=0;i<4;i++)
    {
            cout<<s4[i]<<" ";
    }


}
