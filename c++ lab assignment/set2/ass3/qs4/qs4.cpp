#include<iostream>
using namespace std;
class student{
    public:
    static int totalstudent;
    student()
    {
        totalstudent++;
    }
    static int gettotalstudent()
    {
        return totalstudent;
    }
};
int student::totalstudent=0;
int main()
{
    student s1;
    student s2;
    student s3;
    int ans=student::gettotalstudent();
    cout<<ans;
}

