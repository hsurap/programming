#include <iostream>
using namespace std;
int main()
{
    char ch;
    int x=0,y=0;
    ch=cin.get();
    while (ch!='\n')
    {
        switch(ch)
        {
            case 'n':y++;break;
            case 's':y--;break;
            case 'e':x++;break;
            case 'w':x--;break;
        }
        ch=cin.get();
    }
    cout <<x<<" "<<y;
}
