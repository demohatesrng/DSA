#include <iostream>
using namespace std;
void insertion_sort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int temp = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > temp) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = temp;
    }
}
void print_array(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main() {
    int arr[] = {23, 56, 34, 12, 78, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    print_array(arr, n);

    insertion_sort(arr, n);

    cout << "Sorted array: ";
    print_array(arr, n);

    return 0;
}