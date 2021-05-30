#include <iostream>
using namespace std;
bool prime(int no)
{
    bool ans=true;
    for(int i=2;i<no;i++)
    {
        if(no%i==0)
            ans=false;
    }
    return ans;
}
int main()
{
	for(int i=2;i<=300;i++)
	{
	    if(prime(i))
	        cout<<i<<" ";
	}
	return 0;
}

