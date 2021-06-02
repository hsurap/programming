#include<iostream>
using namespace std;
class class1{
	void d()
	{
		cout<<"hey ";
	}
	friend void k();
};
void k()
{
	class1 ob;
	ob.d();
	cout<<"this side Parush";
}
class class2{
	friend class class3;
	void d()
	{
		cout<<"Hello from a\n";
	}
};
class class3{
    public:
	void d1()
	{
        class1 ob;
        //ob.d();
        cout<<"Hello from friend";
    }
};
int main(){
	k();
	class2 ob1;
    //ob1.d1();
}

