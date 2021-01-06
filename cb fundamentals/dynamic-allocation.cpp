#include<iostream>
using namespace std;
int main()
{
    /*int n;
    cin>>n;
    cout<<n;
    int *b= new int;
    cin>>b;
    cout<<b;
    delete b;*/
    int a1[100];
    cout <<sizeof(a1)<<endl;
    cout<<a1<<endl;
    int *a2= new int [500];
    cout <<sizeof(a2)<<endl;
    cout<<a2<<endl;
    delete [] a2;
    int n;
    cin>>n;
    int *a3=new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>a3[i];
        cout<<a3[i]<<" ";
    }
    delete [] a3;
}
