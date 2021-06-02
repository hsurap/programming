#include <iostream>
using namespace std;
class rectangle{
    int l;
    int b;
    public:
    void getdata(int l,int b)
    {
        this->l=l;
        this->b=b;
    }
    void print()
    {
        cout<<l*b<<endl;
    }
};
int main()
{

    int l,b;
    rectangle *r= new rectangle[3];
    for(int i=0;i<3;i++)
    {
        cin>>l>>b;
        r[i].getdata(l,b);
        r[i].print();
    }
}

