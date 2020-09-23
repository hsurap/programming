#include <iostream>
using namespace std;
int main()
{
   int n;
   cin >>n;
   int a[n];

   int k,no;
   cin >>k;
   for(int i=0;i<n;i++)
   {
       cin >>a[i];
   }
   for(int i=0;i<n;i++)
   {
       cout <<a[i];
   }
   cout <<endl;
   cout <<k<<endl;
   for (int i=0;i<n;i++)
   {
       for (int j=i;j<n-1;j++)
       {
           if ((a[i]+a[j+1])%(k)==0)
           {
             no=no+1;
           }
       }
   }
   cout <<no;

}
