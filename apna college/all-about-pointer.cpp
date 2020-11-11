#include<iostream>
using namespace std;
int main()
{
    int n=10;
    int *p=&n;
    int **pp=&p;
    cout <<n<<" "<<p<<" "<<pp<<endl;
    cout<<*p<<" "<<**pp<<endl;
    cout<<&n<<" "<<&p<<" "<<&pp<<endl;
    int a[5]={1,2,3,4,5};
    int *b=a;
    cout<<*b<<endl<<*(++b);
}
