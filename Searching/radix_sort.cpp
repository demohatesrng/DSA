#include <algorithm>
using namespace std;
void countingSort(int arr[], int size, int exp) {
    const int bucketSize = 10;
    int buckets[bucketSize] = {0};
    int output[size];

    for (int i = 0; i < size; ++i) {
        buckets[(arr[i] / exp) % 10]++;
    }

    for (int i = 1; i < bucketSize; ++i) {
        buckets[i] += buckets[i - 1];
    }

    for (int i = size - 1; i >= 0; --i) {
        output[buckets[(arr[i] / exp) % 10] - 1] = arr[i];
        buckets[(arr[i] / exp) % 10]--;
    }

    for (int i = 0; i < size; ++i) {
        arr[i] = output[i];
    }
}

void radixSort(int arr[], int size) {
    int maxElement = *max_element(arr, arr + size);

    for (int exp = 1; maxElement / exp > 0; exp *= 10) {
        countingSort(arr, size, exp);
    }
}