#include<iostream>
using namespace std;
int main()
{
    int no;
    cin>>no;
    int m,n;
    if(no%2==0)
    {
        m=no/2;
        n=1;
        cout <<"answer="<<" "<<m*m-n*n<<"  "<<m*m+n*n;
    }
    else {
        m=(no+1)/2;
        n=(no-1)/2;
        cout <<"answer="<<" "<<2*m*n<<"  "<<m*m+n*n;
    }

}
