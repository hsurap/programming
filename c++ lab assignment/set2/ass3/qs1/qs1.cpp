#include<iostream>
using namespace std;
class db;
class dm
{
	public:
	int m;
	int c;
	dm(int m,int c)
	{
		this->m=m;
		this->c=c;
	}
	friend void conv(db &ob,dm &ob1,int c);
};
class db{
	public:
	int f;
	int i;
	db(int f,int i)
	{
		this->f=f;
		this->i=i;
	}
	friend void conv(db &ob,dm &ob1,int c);
};

void conv(db &ob,dm &ob1,int c)
{
    if(c==1)
    {
        float k=(ob.f*0.305)+ob1.m;
        float j=(ob.i*2.54)+ob1.c;
        cout<<"ans: "<<k<<" m "<<j<<" cm";
    }
    else if(c==2)
    {
        float k=(ob1.m*3.3)+ob.f;
        float j=(ob1.c*0.4)+ob.i;
        cout<<"ans: "<<k<<" ft "<<j<<" in";
    }
}

int main(){
	cout<<"Enter in meter and cm"<<endl;
	int mm,cc;
	cin>>mm>>cc;
	dm ob1(mm,cc);
	cout<<"Enter in feet and inches"<<endl;
	cin>>mm>>cc;
	db ob2(mm,cc);
	cout<<"Enter 1 to get answer in meter and 2 to get in feet"<<endl;
	int c1;
	cin>>c1;
	conv(ob2,ob1,c1);
}


