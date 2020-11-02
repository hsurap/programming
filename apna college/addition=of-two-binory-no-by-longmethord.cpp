#include <iostream>
#include<math.h>
using namespace std;
int binorytodecimal(int n)
{
    int c=0;
    int sum=0;
    for(int i=n;i>0;i=i/10)
    {
        int l=i%10;
        sum=sum+l*pow(2,c);
        c++;
    }
    return sum;
}
int decimaltobinory(int n)
{
    int sum=0,c=0;
    for(int i=n;i>0;i=i/2)
    {
        int r=i%2;
        sum=sum+r*pow(10,c);
        c++;
    }
    return sum;
}
int main()
{
    int x,y;
    cin>>x>>y;
    int bsum=binorytodecimal(x)+binorytodecimal(y);
    cout <<decimaltobinory(bsum);

}
