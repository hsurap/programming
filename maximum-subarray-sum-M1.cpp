#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >>n;
    int a[n];
    int l=-1,r=-1;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int sum=0,maxsum=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            sum=0;
            for(int k=i;k<=j;k++)
            {
                sum+=a[k];
            }
            if (sum>maxsum)
            {
                maxsum=sum;
                l=i;
                r=j;

            }
        }
    }
    for(int k=l;k<=r;k++)
    {
        cout<<a[k]<<"   ";
    }
    cout <<endl;
    cout <<"maximum sum is"<<maxsum;


}

