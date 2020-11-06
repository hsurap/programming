#include <iostream>
using namespace std;
int sum (int x,int y)
{
    return x+y;
}
//int sum (int x,int y,int z=10)
//{
   // return x+y+z;
//}
int main()
{
    int x,y;
    cin>>x>>y;
    cout <<sum(x,y);
    return 0;
}
