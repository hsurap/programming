#include <iostream>
using namespace std;
namespace first
{
   void func()
   {
      cout << "first"<<endl;
   }
   int var=1;
}
namespace second
{
   void func()
   {
      cout << "second"<<endl;
   }
   int var=2;
}

int main()
{
   first::func();
   second::func();
   cout<<endl<<first::var;
   cout<<endl<<second::var;
   return 0;
}
