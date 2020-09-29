#include <iostream>
using namespace std;
int main()
{
    int a=0,b=1;
    int c=a+b;
    int no;
    cin >>no;
    for(int i=0;true;i++)
    {
        cout <<c<<endl;
        if (c==no)
        {
            cout <<"part of fibonacci ";
            break;
        }
        a=b;
        b=c;
        c=a+b;
    }
}
