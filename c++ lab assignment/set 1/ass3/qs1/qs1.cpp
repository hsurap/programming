#include <iostream>
#include <cstring>
using namespace std;
class student{
    public:
    int age;
    int rollno;
    void setdata(int age,int rollno)
    {
        this->age=age;
        this->rollno=rollno;
    }
    void print()
    {
        cout<<age<<" "<<rollno<<" "<<endl;
    }
};
int main()
{
	student s[3];
	int age,rollno;
	for(int i=0;i<3;i++)
	{
	    cin>>age>>rollno;
	    s[i].setdata(age,rollno);
	    s[i].print();
	}
	cout<<endl;
	student *s1=new student[3];
	for(int i=0;i<3;i++)
	{
	    cin>>age>>rollno;
	    s1[i].setdata(age,rollno);
	    s1[i].print();
	}
	return 0;
}
