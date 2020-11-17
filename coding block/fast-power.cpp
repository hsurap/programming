#include<iostream>
using namespace std;
int fastpower(int a,int b)
{
    if(b==0)
    {
        return 1;
    }
    else if (b&1)//checking odd
    {
        return a*fastpower(a,b/2)*fastpower(a,b/2);
    }
    else{
        return fastpower(a,b/2)*fastpower(a,b/2);
    }
}
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<fastpower(a,b);

}
