#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int csum=n;
    while(csum>0)
    {
        cout<<n<<endl;
        cin>>n;
        csum+=n;
    }
}
