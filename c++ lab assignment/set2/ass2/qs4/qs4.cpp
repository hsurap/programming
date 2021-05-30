#include<iostream>
using namespace std;
class student{
    int a;
    void func1(int a)
    {
        cout<<"func1"<<endl;
        this->a=a;
        cout<<a<<endl;
    }
    public:
    void func2(int a)
    {
        func1(a);
        cout<<"func2"<<endl;
    }
    void print()
    {
        cout<<a<<endl;
    }
};
int main()
{
    student s;
    s.func2(10);
    s.print();
}

