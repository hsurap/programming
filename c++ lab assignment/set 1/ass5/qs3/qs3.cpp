#include<iostream>
using namespace std;
class class1{
	public:
	class1(){
		cout<<"base"<<endl;
	}
	protected:
		void d(){
			cout<<"protected"<<endl;
		}
};
class class2:protected class1{
	public:
	class2(){
		cout<<"derived"<<endl;
		d();
	}
};
class class3{
	public:
	class3(){
		cout<<"base"<<endl;
	}
	protected:
		void d(){
			cout<<"protected"<<endl;
		}
};
class class4:private class3{
	public:
	b(){
		cout<<"derived"<<endl;
		d();
	}
};
int main(){
	class1 ob;
	class2 ob1;
	class3 ob2;
	class4 ob3;
}
