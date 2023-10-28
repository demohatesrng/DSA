#include <iostream>
#include <set>
using namespace std;
int main() {
    set<int> mySet;

    // Insert elements into the set
    mySet.insert(3);
    mySet.insert(1);
    mySet.insert(4);
    mySet.insert(2);

    // Check if an element exists in the set
    if (mySet.find(3) != mySet.end()) {
        cout << "Element 3 found in the set." << endl;
    }

    // Erase an element from the set
    mySet.erase(2);

    // Print the elements in the set
    for (const int& element : mySet) {
        cout << element << " ";
    }
    cout << endl;

    // Check the size of the set
    cout << "Set size: " << mySet.size() << endl;

    // Clear the set
    mySet.clear();

    // Check if the set is empty
    if (mySet.empty()) {
        cout << "Set is empty." << endl;
    }

    return 0;
}
