#include<iostream>
#include<string.h>
using namespace std;
struct student
{
    private:
    char name[100];
    int rollno;
    float marks;
    public:
    void setstudentdata(char *ch,int no,int m)
    {
        strcpy(name,ch);
        rollno=no;
        marks=m;
    }
    void getstudentdata()
    {
        cout<<"name="<<name<<endl;
        cout<<"rollno="<<rollno<<endl;
        cout<<"marks="<<marks<<endl;
    }
};
int main()
{
    struct student s[3];
    char ch[20];
    int no;
    float m;
    for(int i=0;i<3;i++)
    {
        cin>>ch>>no>>m;
        s[i].setstudentdata(ch,no,m);
    }
    for(int i=0;i<3;i++)
    {
        s[i].getstudentdata();
    }

    return 0;
}

