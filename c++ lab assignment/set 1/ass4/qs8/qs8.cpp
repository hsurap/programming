#include <iostream>
using namespace std;
class Swap
{
    private:
    int a, b;
public:
    Swap(int a,int b)
    {
        this->a = a;
        this->b = b;
    }
    friend void swap(Swap&);
};
void swap(Swap& s1)
{
    int temp;
    temp = s1.a;
    s1.a = s1.b;
    s1.b = temp;
    cout <<s1.a<<" "<<s1.b;
}
int main()
{
    Swap s(1, 2);
    swap(s);
    return 0;
}

