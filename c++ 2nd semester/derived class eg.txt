#include<iostream>
using namespace std;
class base{
	public:
	base()
	{
		cout<<"base"<<endl;
	}
	protected:
		void d()
		{
			cout<<"From protected"<<endl;
		}
};
class derived:protected base{
	public:
	derived(){
		cout<<"derived"<<endl;
		d();
	}
};
int main(){
	base ob;
	derived ob1;
}

