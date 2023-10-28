#include <iostream>
#include <map>
using namespace std;
int main() {
    map<string, int> myMap;

    // Insert key-value pairs into the map
    myMap["Alice"] = 25;
    myMap["Bob"] = 30;
    myMap.insert(make_pair("Charlie", 35));

    // Access a value by key
    cout << "Alice's age: " << myMap["Alice"] << endl;

    // Check if a key exists in the map
    if (myMap.find("Bob") != myMap.end()) {
        cout << "Bob's age is known." << endl;
    }

    // Erase a key-value pair
    myMap.erase("Charlie");

    // Print the key-value pairs in the map
    for (const auto& pair : myMap) {
        cout << pair.first << ": " << pair.second << endl;
    }

    // Check the size of the map
    cout << "Map size: " << myMap.size() << endl;

    // Clear the map
    myMap.clear();

    // Check if the map is empty
    if (myMap.empty()) {
        cout << "Map is empty." << endl;
    }

    return 0;
}
