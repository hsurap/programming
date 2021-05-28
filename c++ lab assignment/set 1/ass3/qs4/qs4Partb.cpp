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
int main(){
   Try *a= new Try[3];
   a[0].fun();
   a[1].fun();
   a[2].fun();
   delete []a;
}
