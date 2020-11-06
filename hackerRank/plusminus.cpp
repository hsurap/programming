#include<iostream>
using namespace std ;
int main()
{
    int n;
    cin>>n;
    int pm[n];
    for (int i=0;i<n;i++)
    {
        cin >>pm[i];
    }
     for (int i=0;i<n;i++)
    {
        cout <<pm[i];
    }
    cout << "  ";
    int p1=0,p2=0,p3=0;
    for (int i=0;i<n;i++)
    {
        if (pm[i]>0)
        {
            p1=p1+1;
        }
        else if (pm[i]==0)
        {
            p2=p2+1;
        }
        else
        {
            p3=p3+1;
        }
    }
    float answer[3]{p1/n,p2/n,p3/n};
    for (int i=0;i<3;i++)
    {
        cout <<answer[i];
    }

}
