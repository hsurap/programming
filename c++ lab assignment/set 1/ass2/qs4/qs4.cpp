#include <iostream>
using namespace std;
namespace first
{
   void func()
   {
      cout<<"first"<<endl;
   }
   int a=2;
}
namespace second
{
   void func()
   {
      cout<<"second"<<endl;
   }
   int a=3;
}
int main ()
{
   first::func();
   second::func();
   cout<<first::a<<endl;
   cout<<second::a;
   return 0;
}

