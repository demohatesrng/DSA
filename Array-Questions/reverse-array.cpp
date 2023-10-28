#include <iostream>
using namespace std;
void reverse(int arr[], int n) {
    int start = 0;
    int end = n - 1;

    while (start <= end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void printarray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[6] = {45, 67, 34, 123, 88, 5};
    int array[5] = {45, 23, 56, 23, 12};

    reverse(arr, 6);
    reverse(array, 5);

    printarray(arr, 6);
    printarray(array, 5);

    return 0;
}
