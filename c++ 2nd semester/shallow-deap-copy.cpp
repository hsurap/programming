#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
class student{
    int age;
    char *name;
public:
    student(int age,char *name)
    {
        this->age=age;
        //this->name=name;
        this->name=new char[strlen(name)+1];
        strcpy(this->name,name);
    }
    void display()
    {
        cout<<age<<" "<<name<<endl;
    }
};
int main()
{
    char ch[]="abcd";
    student s1(10,ch);
    s1.display();
    ch[1]='x';
    student s2(20,ch);
    s2.display();
    s1.display();
}
