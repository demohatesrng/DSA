#include <iostream>
using namespace std;

bool isUnique(int arr[], int n, int element) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == element) {
            return false; // Element is not unique
        }
    }
    return true; // Element is unique
}
// approach 2
int findunique(int arr[], int size){
    int ans = 0;
    for (int i = 0; i < size; i++){
        ans = ans^arr[i];
    }
    return ans;
}

int main() {
    int arr[] = {45, 67, 34, 123, 88, 5};
    int array[] = {45, 23, 56, 23, 12};
    
    cout << "Unique elements in the first array: "<<endl;
    isUnique(arr, 6, 45);

    cout << "Unique elements in the second array: "<<endl;
    isUnique(array, 5 ,23);

    return 0;
}
