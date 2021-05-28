#include<iostream>
using namespace std;
class Try{
public:
      Try()
      {
        cout<<"constructor call"<<endl;
      }

      ~Try()
      {

         cout<<"destructor call"<<endl;
      }
	  void fun()
	  {
		  cout <<"in function"<<endl;
	  }
};
int main()
{
    Try*try1=new Try();
    try1->fun();
    Try try2;
    try2.fun();
    delete try1;
}

