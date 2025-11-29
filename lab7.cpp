#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() {
    string students[5];
    int scores[5];

    cout << "Enter 5 student names and their scores:\n";

    for (int i = 0; i < 5; i++) {
        cout << "Student " << (i + 1) << " name: ";
        cin >> students[i];

        cout << "Score for " << students[i] << ": ";
        cin >> scores[i];
    }

    
    ofstream outFile("students.txt");
    if (outFile.is_open()) {
        for (int i = 0; i < 5; i++) {
            outFile << students[i] << " " << scores[i] << endl;
        }
        outFile.close();
        cout << "\nData saved successfully!\n";
    } else {
        cout << "Error: could not open file.\n";
        return 1;
    }

    //this is  for reading the file what i am wrtiing
 
    cout << "\nReading data from file:\n";
    ifstream inFile("students.txt");

    if (inFile.is_open()) {
        string name;
        int score;

        while (inFile >> name >> score) {  // read until file ends
            cout << name << " - " << score << endl;
        }

        inFile.close();
    } else {
        cout << "Error: could not open file for reading.\n";
    }

    return 0;
}
