#include<iostream>
using namespace std;
int main()
{
    int *a= new int (30);
    cout<<*a<<endl;
    int *b =new int;
    cout<<*b<<endl;
    int *c= new int[5];
    for(int i=0;i<5;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<5;i++)
    {
        cout<<a[i]<<" ";
    }
    // by delete all memory deleted
    delete a;
    delete b;
    delete []c;
}
