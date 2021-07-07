#include<iostream>
using namespace std;
class add{
    int no;
    public:
    add(int no)
    {
        this->no=no;
    }
    add func(add obj)
    {
        add newobj(10);
        newobj.no=obj.no+this->no;
        return newobj;
    }
    void print()
    {
        cout<<no<<endl;
    }
};
int main()
{
    add a1(5);
    a1.print();
    add a2(10);
    a2.print();
    add a3=a1.func(a2);
    a3.print();
}

