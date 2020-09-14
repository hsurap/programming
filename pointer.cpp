#include <iostream>
using namespace std;
int main()
{
    int a=786;
    int *b =&a; //  b store address of a
    int **c=&b; // c store address of b
    int ***d =&c; // d store address of c
    cout <<a<<endl<<b<<endl<<&a<<endl<<c<<endl<<&b<<endl<<d<<endl<<&c<<endl;
    cout <<*b<<endl<<**c<<endl<<***d<<endl<<*c<<endl<<*d<<endl<<**d;
    return 0;

}


