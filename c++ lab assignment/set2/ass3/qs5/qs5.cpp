#include<iostream>
using namespace std;
class complex
{
	float x;
	float y;
   public:
   	complex(float x,float y)
   	{
   		this->x=x;
   		this->y=y;
	   }
	   ~complex()
	   {
	   	cout<<"destructor call55  "<<endl;
	   }
	complex sum(complex);
	void display();
};
complex complex::sum(complex C)
{
	complex t(0,0);
	t.x = x + C.x;
	t.y = y + C.y;
	return t;
}
void complex::display()
{
	cout<<x<<" + i"<<y<<endl;
}
int main()
{   float a,b;
	cout<<"Enter r and i"<<endl;
   		cin>>a>>b;
	complex C1(a,b);
	cout<<"Enter r and i"<<endl;
   		cin>>a>>b;
	complex C2(a,b);
	complex C3(0,0);
    C3=C1.sum(C2);
	cout<<"\n complex Number 1 = ";C1.display();
	cout<<"\n complex Number 2 = ";C2.display();
	cout<<"\n complex Number 3 = ";C3.display();
	return 0;
}


