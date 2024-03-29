// use only when array is small
// time complexity is O(n2), space = O(1)
#include <iostream>
using namespace std;
void selection_sort(int arr[], int n){
    for (int i = 0; i < n-1; i++){
        int minindex = i;
        for (int j = i+1; j < n; j++){
            if(arr[minindex]>arr[j]){
                minindex = j;
            }
        }
        swap(arr[minindex], arr[i]);
    }
}
int main() {
    int even[6] = {23, 56, 34, 12, 78, 5};
    selection_sort(even, 6);
    cout << "Sorted array: ";
    for (int i = 0; i < 6; i++) {
        cout << even[i] << " ";
    }
    cout << endl;
}