#include<iostream>
using namespace std;
int main()
{
    int *a=new int[100];
    int n;cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int min=a[0];
    for(int i=1;i<n;i++)
    {
        if(a[i]<min)
            min=a[i];
    }
    cout<<min<<endl;
    delete a;
}

