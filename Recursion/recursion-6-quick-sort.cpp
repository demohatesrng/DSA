// quick sort
// time complexity for best case is )(nlogn) and worst case is O(n2)
#include <iostream>
using namespace std;
int partition(int arr[], int s, int e) {
    int pivot = arr[s];
    int cnt = 0;
    for (int i = s + 1; i <= e; i++) {
        if (arr[i] <= pivot) {
            cnt++;
            swap(arr[s + cnt], arr[i]);
        }
    }
    swap(arr[s], arr[s + cnt]);
    return s + cnt;
}
void quicksort(int arr[], int s, int e) {
    if (s >= e) {
        return;
    }
    int p = partition(arr, s, e);
    quicksort(arr, s, p - 1);
    quicksort(arr, p + 1, e);
}
int main() {
    int arr[6] = {2, 4, 5, 1, 3};
    int n = 6;
    quicksort(arr, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}