#include<iostream>
#include<math.h>
using namespace std;
int uniqueno(int *arr ,int a)
{
    int cnt[64]={0};
    for(int i=0;i<a;i++)
    {
        int j=0;
        int no=arr[i];
        while(no>0)
        {
            cnt[j]+=no&1;
            j++;
            no=no>>1;
        }
    }
    for(int i=0;i<64;i++)
    {
        cnt[i]=cnt[i]%3;
    }
    int ans=0;
    for(int i=0;i<64;i++)
    {
        ans=ans+cnt[i]*pow(2,i);
    }
    return ans;
}
int main()
{
    int n;
    cin>>n;
    int a=3*n+1;
    int arr[3*n+1];
    for(int i=0;i<a;i++)
    {
        cin>>arr[i];
    }
    cout <<uniqueno(arr,a);
    return 0;
}
