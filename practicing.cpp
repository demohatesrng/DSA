#include <iostream>
using namespace std;
void merge(int arr[], int s, int mid, int e) {
    int len1 = mid - s + 1;
    int len2 = e - mid;

    int* first = new int[len1];
    int* second = new int[len2];

    for (int i = 0; i < len1; i++) {
        first[i] = arr[s + i];
    }
    for (int i = 0; i < len2; i++) {
        second[i] = arr[mid + 1 + i];
    }

    int i = 0;
    int j = 0;
    int k = s;

    while (i < len1 && j < len2) {
        if (first[i] <= second[j]) {
            arr[k] = first[i];
            i++;
        } else {
            arr[k] = second[j];
            j++;
        }
        k++;
    }

    while (i < len1) {
        arr[k] = first[i];
        i++;
        k++;
    }
    while (j < len2) {
        arr[k] = second[j];
        j++;
        k++;
    }

    delete[] first;
    delete[] second;
}
void mergeSort(int arr[], int s, int e) {
    if (s < e) {
        int mid = s + (e - s) / 2;
        mergeSort(arr, s, mid);
        mergeSort(arr, mid + 1, e);
        merge(arr, s, mid, e);
    }
}
int main() {
    int arr[8] = {34, 56, 78, 3, 41, 26, 32, 22};
    int n = 8;
    mergeSort(arr, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}