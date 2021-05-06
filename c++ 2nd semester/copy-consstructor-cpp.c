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
};
int main()
{
    char ch[]="abcd";
    student s1(10,ch);
    s1.display();
    students2(s1);
    s2.name[0]='x';
    s1.display();
    s2.display();
}
