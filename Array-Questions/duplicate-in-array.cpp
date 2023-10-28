#include <iostream>
using namespace std;

void findDuplicates(int arr[], int n) {
    cout << "Duplicate elements in the array: ";
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                cout << arr[i] << " ";
                break; // Once a duplicate is found, break inner loop
            }
        }
    }
    cout << endl;
}

int main() {
    int arr[] = {45, 67, 34, 123, 88, 5, 34,123};
    int array[] = {45, 23, 56, 23, 12, 45};
    
    cout << "Duplicate elements in the first array: ";
    findDuplicates(arr, 8);

    cout << "Duplicate elements in the second array: ";
    findDuplicates(array, 6);

    return 0;
}
