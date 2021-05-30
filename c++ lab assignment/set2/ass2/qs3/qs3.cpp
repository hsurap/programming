#include <iostream>
using namespace std;
int a=10;
class student{
    public:
     static int rollno;
    int age;
    void print(int rollno)
    {
        cout<<rollno<<endl;
        cout<<student::rollno<<endl;
    }
    void function();
};
int student::rollno=10;
void student::function()
{
    cout<<"function call"<<endl;
}
int main()
{
	student s;
	s.function();
	s.print(100);
	int a=20;
	cout<<a<<endl;
	return 0;
}

