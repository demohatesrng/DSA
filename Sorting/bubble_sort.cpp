// use only when array is small
// time complexity is O(n2), space = O(1)
#include <iostream>
using namespace std;
void bubblesort(int arr[], int n ){
    for (int i = 0; i < n-1; i++){
        for (int j = 0; j < n-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    } 
}
int main() {
    int even[6] = {23, 56, 34, 12, 78, 5};
    bubblesort(even, 6);
    cout << "Sorted array: ";
    for (int i = 0; i < 6; i++) {
        cout << even[i] << " ";
    }
    cout << endl;
}