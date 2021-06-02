#include<iostream>
using namespace std;
class a{
	int l;
	int b;
	public:1
		int are;
		a(){
		}
	a(int l,int b){
		this->l=l;
		this->b=b;
	}
	a area(){
		a t;
		t.are=this->l*this->b;
		return t;
	}
};
int main(){
	cout<<"Enter number of rectangles"<<endl;
	int n;
	cin>>n;
	a* ob = new a[n];
	int l,b;
	for(int i=0;i<n;i++){
		cout<<"Enter length and breadth of "<<i+1<<" rectangle"<<endl;
		cin>>l>>b;
		ob[i] = a(l,b);
	}
	for(int i=0;i<n;i++){
		cout<<"Area of "<<i+1<<" rectangle is"<<endl;
		a t=ob[i].area();
		cout<<t.are<<endl;
}}

