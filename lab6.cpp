#include <iostream>
#include <string>
using namespace std;

int main() {
    
    string nTrainStops[] = {
        "Astoria-Ditmars Blvd",
        "Astoria Blvd",
        "30 Av",
        "Broadway",
        "36 Av",
        "39 Av",
        "Queensboro Plaza",
        "Lexington Av/59 St",
        "5 Av/59 St",
        "57 St-7 Av",
        "Times Sq-42 St",
        "34 St-Herald Sq",
        "14 St-Union Sq",
        "Canal St",
        "Coney Island-Stillwell Av"
    };
  int size = sizeof(nTrainStops) / sizeof(nTrainStops[0]);

    string myStop;
    cout << "Enter your stop: ";
    getline(cin, myStop);  

    // check if the stop is in the list
    bool found = false;
    for (int i = 0; i < size; i++) {
        if (nTrainStops[i] == myStop) {
            cout << "🚇 " << myStop << " — this is my stop!" << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Stop not found on the N Train." << endl;
    }

    return 0;
}
