#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int target = 6;

    // Binary search for the target in the sorted vector
    bool found = binary_search(numbers.begin(), numbers.end(), target);

    if (found) {
        cout << "Found " << target << " in the vector." << endl;
    } else {
        cout << target << " not found in the vector." << endl;
    }

    string abcde = "abcde";
    reverse(abcde.begin(),abcde.end());
    cout<<abcde<<endl;
    return 0;
}