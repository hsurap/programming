#include <iostream>
using namespace std;
void swa(int *pt1,int *pt2)
{
    int c=*pt1;
    *pt1=*pt2;
    *pt2=c;
}
int main()
{
    int a,b;
    cin>>a>>b;
    swa(&a,&b);
    cout<<a<<endl<<b;


}
