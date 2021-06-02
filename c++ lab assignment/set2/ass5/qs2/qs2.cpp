#include <iostream>
using namespace std;
class alpha{
	int a;
	int b;
	public:
		alpha(){
			cout<<"From alpha"<<endl;
		}
		~alpha(){
			cout<<"alpha destroyed"<<endl;
		}
};
class beta{
	int c;
	int d;
	public:
		beta(){
			cout<<"From beta"<<endl;
		}
		~beta(){
			cout<<"beta destroyed"<<endl;
		}
};
class gamma:public alpha,beta{
	int e;
	int f;
	public:
		gamma(){
			cout<<"From gamma"<<endl;
		}
		~gamma(){
			cout<<"gamma destroyed"<<endl;
		}
};
int main(){
	gamma ob;
}

