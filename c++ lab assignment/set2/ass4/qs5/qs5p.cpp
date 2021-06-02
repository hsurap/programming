#include<iostream>
using namespace std;
class a{
	int empid;
	string empname;
	int empage;
	int empsalary;
	public:
		a(){

		}
		a(int id,int age,int sal,string name){
		empid=id;
		empname=name;
		empage=age;
		empsalary=sal;
		}
	void in(){
		int id,age,sal;
		string name;
		cout<<"Enter id"<<endl;
		cin>>id;
		cout<<"Enter name"<<endl;
		cin>>name;
		cout<<"Enter age"<<endl;
		cin>>age;
		cout<<"Enter salary"<<endl;
		cin>>sal;
		empid=id;
		empname=name;
		empage=age;
		empsalary=sal;
	}
	void out(){
		cout<<"id:"<<empid<<endl;
		cout<<"name:"<<empname<<endl;
		cout<<"age:"<<empage<<endl;
		cout<<"salary:"<<empsalary<<endl;
	}
};
int main(){
	cout<<"Enter number of employees"<<endl;
	int n;
	cin>>n;
	int id,age,sal;
		string name;
	a* ob = new a[n];
	for(int i=0;i<n;i++){
		int id,age,sal;
		string name;
		cout<<"Enter id"<<endl;
		cin>>id;
		cout<<"Enter name"<<endl;
		cin>>name;
		cout<<"Enter age"<<endl;
		cin>>age;
		cout<<"Enter salary"<<endl;
		cin>>sal;
		ob[i]=a(id,age,sal,name);
	}
		cout<<"DETAILS"<<endl;
		for(int i=0;i<n;i++){
		cout<<i+1<<"Employee:"<<endl;
		ob[i].out();}
}
