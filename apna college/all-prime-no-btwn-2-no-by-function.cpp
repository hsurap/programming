#include<iostream>
using namespace std;
void prime(int a,int b)
{
    for(int i=a;i<=b;i++)
    {
        int j;
        for( j=2;j<i;j++)
        {
            if(i%j==0)
                break;
        }
        if(j==i)
            cout <<j<<" ";;
    }
}
int main()
{
    int a,b;
    cin>>a>>b;
    prime(a,b);
    return 0;

}
