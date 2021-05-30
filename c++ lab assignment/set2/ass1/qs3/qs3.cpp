#include<iostream>
using namespace std;
int main()
{
    float fahrenheit, celsius;
    cout << "Enter the temperature in Celsius : ";
    cin >> celsius;
    fahrenheit = (celsius * 9.0) / 5.0 + 32;
    cout << "Celsius=" << celsius << endl;
    cout << "Fahrenheit=" << fahrenheit << endl;
    return 0;
}

