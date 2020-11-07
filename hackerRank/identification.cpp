#include<iostream>
using namespace std;
int main()
{
    char ch;
    int ascii;
    cout <<"entre charchter";
    cin>>ch;
    ascii = ch;
    if (ascii >= 65 && ascii <= 90)
        cout<<"capital latter";
    else if (ascii >= 97 && ascii <=122)
        cout<<"small letter";
    else if (ascii >=48 && ascii <= 57)
        cout<<"digit";
    else if (ascii>=0 && ascii<=47 || ascii>=58 && ascii<=64 || ascii>=91 && ascii<=96 || ascii>=123 && ascii<=127)
        cout<<"special symbol";

}
