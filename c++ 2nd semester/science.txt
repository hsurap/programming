#include <iostream>
using namespace std;
class student{
	public:
	virtual void d()=0;
};
class science:public student{
	void d(){
		cout<<"From science"<<endl;
	}
};
class commerce:public student{
	public:
	void d(){
		cout<<"From commerce"<<endl;
	}
};
class art:public student{
	public:
	void d(){
		cout<<"From art"<<endl;
	}
};
int main(){

	commerce ob1;
	science ob2;
	art ob3;
	student *ob;
	ob=&ob1;
	ob->d();
	ob=&ob2;
	ob->d();
	ob=&ob3;
	ob->d();
}
