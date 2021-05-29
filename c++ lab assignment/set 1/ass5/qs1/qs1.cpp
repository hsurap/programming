#include<iostream>
using namespace std;
class base{

	public:
	base()
	{
		cout<<"in base class"<<endl;
	}
};
class derived:public base
{
	public:
	derived()
	{
		cout<<"in derived"<<endl;
	}
};
int main(){
	base ob;
	derived ob1;
}

