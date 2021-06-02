#include <iostream>
using namespace std;
class X{
	public:
	string a;
		X(){
			a="Hello ";
		}
		~X(){
			cout<<"X destruct"<<endl;
		}
};
class Y{
	public:
	string b;
		Y(){
			b="World";
		}
		~Y(){
			cout<<"Y destruct"<<endl;
		}
};
class Z:public X,Y{
	string c;
	public:
		Z(){
			c=a+b;
			cout<<c<<endl;
		}
		~Z(){
			cout<<"Z destruct"<<endl;
		}
};
int main(){
	Z ob;
}
