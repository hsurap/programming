#include<iostream>
using namespace std;
class student{
    public:
    int age;
    const int rollno;
    student(int age,int rollno):rollno(rollno)
    {
        this->age=age;
    }
    void print()const
    {
        cout<<age<<" "<<rollno<<endl;
    }
};
int main()
{
    student s1(10,20);
    s1.print();

    student s2(20,30);
    s2.print();

}

