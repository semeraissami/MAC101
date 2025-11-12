// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
       
    if (number % 3 == 0 && number % 5 == 0) {
        cout << "FizzBuzz" << endl;
    } 
    else if (number % 3 == 0) {
        cout << "Fizz" << endl;
    } 
    else if (number % 5 == 0) {
        cout << "Buzz" << endl;
    } 
    else {
        cout << "boo =/" << endl;
    }

    return 0;
}
