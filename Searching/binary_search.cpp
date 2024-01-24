#include <iostream>
/*
using namespace std;
int binary_search(int arr[], int size, int key) {
    int start = 0;
    int end = size - 1;
    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (arr[mid] == key) {
            return mid;
        }
        if (key > arr[mid]) {
            start = mid + 1;
        } 
        else {
            end = mid - 1;
        }
    }
    return -1;
}
int main() {
    int even[6] = {2, 3, 4, 5, 6, 7};
    int index = binary_search(even, 6, 4);
    cout << "Index of 4 in even array: " << index << endl;
}

// Recursive
#include <iostream>
using namespace std;
bool binarysearch(int arr[], int start ,int n, int key){
    int start = 0;
    int end = n-1;
    int mid = (start+end)/2;
    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (arr[mid] == key) {
            return mid;
        }
        if (arr[mid] > key) {
            return binarysearch(arr, start, mid - 1, key);
        }
        return binarysearch(arr, mid + 1, end, key);
    }
}
int main(){
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(array) / sizeof(array[0]);
    int key = 5;
    int result = binarysearch(array, 0, size - 1, key);
    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    } 
    else {
        cout << "Element not found in the array." << endl;
    }
}
*/