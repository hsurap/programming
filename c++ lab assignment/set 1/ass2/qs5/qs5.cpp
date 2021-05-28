#include <iostream>
using namespace std;
class student
{
    public:
    student()
    {
        cout<<"constructor call"<<endl;
    }
    ~student()
    {
        cout<<"destructor call"<<endl;
    }
};
int main() {
	student s1,s2,s3;
	return 0;
}

