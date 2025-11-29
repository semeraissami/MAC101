#include<iostream>
using namespace std;
 
int main()
{
    float fahrenheit, Celsius;
 
    cout << "Enter the temperature in Celsius : ";
    cin >> Celsius ;
    fahrenheit = (Celsius * 9.0) / 5.0 + 32;
    cout << "The temperature in Celsius    : " << Celsius << endl;
    cout << "The temperature in Fahrenheit : " << fahrenheit << endl;
    return 0;
}
