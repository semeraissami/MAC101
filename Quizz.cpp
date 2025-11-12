#include <iostream>
using namespace std;

int main() {
    int number;   
    int i = 1;  
    
    cout << "Enter a number: ";
    cin >> number;  
    while (i <= number) {   
        if (i % 3 == 0 && i % 5 == 0) {
            cout << "FizzBuzz" << endl;
        } 
        else if (i % 3 == 0) {
            cout << "Fizz" << endl;
        } 
        else if (i % 5 == 0) {
            cout << "Buzz" << endl;
        } 
        else {
            cout << i << " = Booo =/" << endl;
        }
        i++;
    }
 return 0;
}
    
