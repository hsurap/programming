#include <iostream>
using namespace std;
class student{
	protected:
	string name;
	int roll;
	public:
	void getd(){
		cout<<"Enter student roll no: "<<endl;
		cin>>roll;
		cout<<"Enter name of the student: "<<endl;
		cin>>name;
	}
	void dispd(){
		cout<<roll<<"                          "<<name<<"                   ";
	}
};
class marks:public student{
	protected:
		int sub1;
		int sub2;
	public:
		void getm(){
			getd();
			cout<<"Enter marks of subject 1: "<<endl;
			cin>>sub1;
			cout<<"Enter marks of subject 2: "<<endl;
			cin>>sub2;
		}
		void dispm(){
			cout<<sub1<<"                "<<sub2<<"                "<<sub1+sub2<<"              ";
		}
};
class result:public marks{
	protected:
		int totm;
	public:
		string calcr(){
			totm=sub1+sub2;
			if(totm<70)
			return "FAILED";
			else
			return "PASSED";
		}
		void dispr(){
			dispd();
			dispm();
			string k=calcr();
			cout<<k<<endl;
		}
};
int main(){
	cout<<"Enter the number of students: "<<endl;
	int n;
	cin>>n;
	result ob[n];
	for(int i=0;i<n;i++){
		ob[i].getm();
	}
	cout<<"Roll no                 Name             Subject1          Subject2          TotalMarks        Result"<<endl;
	cout<<"---------------------------------------------------------------------------------------------------------"<<endl;
	for(int i=0;i<n;i++){
		ob[i].dispr();
	}
	cout<<"---------------------------------------------------------------------------------------------------------"<<endl;
}

