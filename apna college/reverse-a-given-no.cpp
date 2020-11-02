#include<iostream>
using namespace std;
int main()
{
    int no;
    cin>>no;
    int r;
    for(int i=no;i>0;i=i/10)
    {
       int lastdigit =i%10;
       r=r*10+lastdigit;
    }
    cout <<r;
}
