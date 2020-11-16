#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> v;
    v.reserve(100);//reverse 100 bucket already
    //by v.clear() all element are clear
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }
    v.pop_back();// by this last element will remove
    sort(v.begin(),v.end());//soating
    for(int i=0;i<v.size();i++)
    {
       cout<<v[i]<<" ";
    }
}
