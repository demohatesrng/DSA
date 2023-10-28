#include <iostream>
using namespace std;

int binary_search(int arr[], int size, int key) {
    int start = 0;
    int end = size - 1;

    while (start <= end) {
        int mid = start + (end - start) / 2; // Calculate the mid within the loop

        if (arr[mid] == key) {
            return mid; // Return the index where the key was found
        }

        if (key > arr[mid]) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }

    return -1; // Return -1 to indicate that the key was not found
}

int main() {
    int even[6] = {2, 3, 4, 5, 6, 7};
    int odd[5] = {1, 2, 3, 4, 5};
    int index = binary_search(even, 6, 4);
    int index1 = binary_search(odd, 5, 10);

    cout << "Index of 4 in even array: " << index << endl;
    cout << "Index of 10 in odd array: " << index1 << endl;

    return 0;
}
// time complexity is O(log n)