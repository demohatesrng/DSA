// sorted array or not
#include <iostream>
using namespace std;
bool isSorted(int arr[], int size) {
    if (size <= 1) {
        return true; // An empty arr or an arr with one element is considered sorted.
    }
    if (arr[size - 2] > arr[size - 1]) {
        return false; // If the last two elements are out of order, the arr is not sorted.
    }
    return isSorted(arr, size - 1); // Recursively check the rest of the arr.
}
int main() {
    int arr[6] = {2, 4, 6, 8, 9, 32};
    int size = 6;
    bool ans = isSorted(arr, size);
    if (ans) {
        cout << "arr is sorted" << endl;
    }
    else {
        cout << "arr is not sorted" << endl;
    }
    return 0;
}


//sum of arr using recursion
#include <iostream>
using namespace std;
int sumarr(int arr[], int size) {
    // Base case: If the size is 0, the sum is 0.
    if (size == 0) {
        return 0;
    }
    // Recursive case: Sum the current element and the sum of the rest of the elements.
    int remaining = sumarr(arr+1, size-1);
    int sum = arr[0] + remaining;
    return sum;
}
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    int sum = sumarr(arr, size);
    cout << "Sum of the arr is: " << sum << endl;
    return 0;
}


//linear search using recursion
#include <iostream>
using namespace std;
int linearsearch(int arr[] , int n, int key){
    if(n==0){
        return false;
    }
    if (arr[0]==key){
        return true;
    }
    else{
        bool remaining = linearsearch(arr+1,n-1, key);
        return remaining;
    }
}
int main(){
    int arr[6]={2,3,46,57,23,9};
    int size = 6;
    int key = 23;

    bool ans = linearsearch(arr,6,key);
    if(ans){
        cout<<"present"<<endl;
    }
    else{
        cout<<"absent"<<endl;
    }
return 0;
}


//binary search using recursion
#include <iostream>
using namespace std;
bool binarysearch(int arr[], int start ,int n, int key){
    int start = 0;
    int end = n-1;
    int mid = (start+end)/2;
    while (start <= end) {
        int mid = start + (end - start) / 2;
        // If the key element is found, return its index
        if (arr[mid] == key) {
            return mid;
        }
        // If the key is in the start half of the sorted arr
        if (arr[mid] > key) {
            return binarysearch(arr, start, mid - 1, key);
        }
        // If the key is in the end half of the sorted arr
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
    } else {
        cout << "Element not found in the array." << endl;
    }
return 0;
}