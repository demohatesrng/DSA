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
int main() {
    int even[6] = {23, 56, 34, 12, 78, 5};
    insertion_sort(even, 6);
    cout << "Sorted array: ";
    for (int i = 0; i < 6; i++) {
        cout << even[i] << " ";
    }
    cout << endl;
}