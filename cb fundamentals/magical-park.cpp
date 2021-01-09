#include<iostream>
using namespace std;
void func(char a[][100],int row,int col,int mreq,int init)
{
    bool suc=true;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            char ch=a[i][j];
            if(init<mreq)
            {
                suc=false;
                break;4 4
. . * .
. # . .
* * . .
. # * *
5 20
            }
            if(ch='.')
            {
                init-=2;
            }
            else if(ch='*')
            {
                init+=5;
            }
            else{
                break;
            }
            if(j!=col-1)
            {
                init--;
            }
        }
    }
    if(suc){
        cout<<init;
    }
    else{
        cout<<false;
    }
}
int main()
{
    int row,col;
    cin>>row>>col;
    char a[100][100];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cin>>a[i][j];
        }
    }
    int mreq,init;
    cin>>mreq>>init;
    func(a,row,col,mreq,init);
}
