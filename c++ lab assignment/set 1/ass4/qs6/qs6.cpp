#include <iostream>
using namespace std;
class Test {
    int x, y;
public:
    Test(int x, int y)
    {
        this->x = x;
        this->y = y;
    }
    void print()
    {
        cout << x << " " << y << endl;

    }
};

int main()
{
    int N;
    cin>>N;
    Test *arr ;//= new Test[N];
    for (int i = 0; i < N; i++) {
        arr[i] = Test(i, i + 1);
    }
    for (int i = 0; i < N; i++) {
        arr[i].print();
    }
}

