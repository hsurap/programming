#include <iostream>
using namespace std;

int main() {
	int a;
	cin>>a;
	if(a==0)
	    cout<<" no is zero"<<endl;
	else if(a%2==0)
	    cout<<"even no";
	else
	    cout<<"odd no";

	int p=10,q=20;
	char ch;
	cin>>ch;
	switch(ch)
	{
	    case '+' :
	    cout<<p+q;
	    break;
	    case '-' :
	    cout<<p-q;
	    break;
	    case '*' :
	    cout<<p*q;
	    break;
	    case '/' :cout<<p/q;
	    break;
	}
	return 0;
}

