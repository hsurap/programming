#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if (j<=i)
            cout<<"*";
            else{cout<<" ";}
        }
        for (int j=1;j<=n;j++)
        {
            if (j<n-i)
                cout<<" ";
            else {cout <<"*";}
        }

        cout <<endl;
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if (j<=n+1-i)
                cout <<"*";
            else {cout <<" ";}
        }
        for (int j=1;j<=n;j++)
        {
            if (j<n-i)
                cout<<"*";
            else {cout <<" ";}
        }
        cout <<endl;
    }
}
