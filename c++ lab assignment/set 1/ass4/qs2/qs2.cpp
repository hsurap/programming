#include<iostream>
using namespace std;
class student{
    int age;
    int no;
    public:
    student()
    {
        cout<<"no argument"<<endl;
    }
    student(int age)
    {
        cout<<"one argument"<<endl;
    }
    student(int age,int no)
    {
        cout<<"two argument"<<endl;
    }
    student(student const & s)
    {
        this->age=s.age;
        this->no=s.no;
        cout<<"copy constructor"<<endl;
    }
    ~student()
    {
        cout<<"destructor"<<endl;
    }
};
int main()
{
    student s1;
    student s2(10);
    student s3(20,30);
    student s4(s3);
}

