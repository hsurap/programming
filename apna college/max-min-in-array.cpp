#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        cout <<arr[i]<<" ";
    }
    cout <<endl;
    int mx=arr[0],mn=arr[0];
    for(int i=1;i<n;i++)
    {
        if(mx<arr[i])
            mx=arr[i];
    }
    cout <<"maximum is"<<" "<<mx;
    cout <<endl;
    for(int i=1;i<n;i++)
    {
        if(mn>arr[i])
            mn=arr[i];
    }
    cout <<"minimum is"<<" "<<mn;
}
