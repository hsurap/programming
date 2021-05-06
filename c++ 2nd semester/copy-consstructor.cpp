#include<bits/stdc++.h>
using namespace std;
class student{
    int age;
public:
    char* name;
    student(int age,char *name)
    {
        this->age=age;
        this->name=new char[strlen(name)+1];
        strcpy(this->name,name);
    }
    void display()
    {
        cout<<age<<" "<<name<<endl;
    }
    student (student const & s)
    {
        this->age=s.age;
        //this>name=s.name;
        this->name=new char[strlen(s.name)+1];
        strcpy(this->name,s.name);
    }
};
int main()
{
    char ch[]="abcd";
    student s1(10,ch);
    s1.display();
    student s2(s1);
    s2.name[0]='x';
    s1.display();
    s2.display();
}
