#include<iostream>
using namespace std;
class a{
	public:
	a()
	{
		cout<<"IN BASE"<<endl;
	}
    void d()
    {
        cout<<"HELLO"<<endl;
    }
};
class b:private a{
	public:
	b()
	{
		cout<<"IN DERIVED"<<endl;
	}
	void d()
	{
		cout<<"OVERRIDED HELLO"<<endl;
	}
};
int main(){
	a ob;
	b ob1;
	ob.d();
	ob1.d();
}

