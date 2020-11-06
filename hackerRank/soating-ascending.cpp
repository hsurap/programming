#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >>n;
    int soat[n];
    for(int i=0;i<n;i++)
    {
        cin >>soat[i];
    }
    for(int i=0;i<n;i++)
    {
        for (int j=0;j<n-1;j++)
        {
            if (soat[j]>soat[j+1])
            {
                int x=soat[j];
                soat[j]=soat[j+1];
                soat[j+1]=x;
            }
        }
    }
     for(int i=0;i<n;i++)
    {
        cout <<soat[i]<<"   ";
    }


}
