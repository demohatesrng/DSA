#include <iostream>
#include <algorithm>
using namespace std;
void countingSort(int arr[], int size) {
    int maxElement = *max_element(arr, arr + size);
    int* count = new int[maxElement + 1]();

    for (int i = 0; i < size; ++i) {
        count[arr[i]]++;
    }

    int index = 0;
    for (int i = 0; i <= maxElement; ++i) {
        while (count[i] > 0) {
            arr[index++] = i;
            count[i]--;
        }
    }

    delete[] count;
}