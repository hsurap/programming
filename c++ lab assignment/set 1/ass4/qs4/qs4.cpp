#include<iostream>
using namespace std;
class student{
    int age;
    int no;
    public:
    student(int age,int no)
    {
        this->age=age;
        this->no=no;
    }
    void print()
    {
        cout<<age<<" "<<no<<endl;
    }
};
int main()
{
    student *s=new student(10,20);
    (*s).print();
    s->print();
}

