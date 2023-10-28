#include <iostream>
using namespace std;
void swapAlternate(int arr[], int n) {
    for (int i = 0; i < n - 1; i += 2) {
        swap(arr[i], arr[i + 1]);
    }
}
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main() {
    int arr[] = {45, 67, 34, 123, 88, 5};
    int array[] = {45, 23, 56, 23, 12};

    swapAlternate(arr, 6);
    swapAlternate(array, 5);

    printArray(arr, 6);
    printArray(array, 5);

    return 0;
}