#include <iostream>
using namespace std;
int main()
{
    int alice[3];
    {
        for (int i=0;i<3;i++)
        {
            cin >>alice[i];
        }
    }
    int bob[3];
    {
        for (int i=0;i<3;i++)
        {
            cin>>bob[i];
        }
    }
    int x=0,y=0;
    for (int i=0;i<3;i++)
    {
        if (alice [i]>bob[i])
        {
            x++;
        }
        else if (alice [i]<bob[i])
        {
            y++;
        }
    }
    int ans[]{x,y};
    cout <<ans[0]<<"    "<<ans[1];

}
