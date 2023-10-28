#include <iostream>
using namespace std;
void sort0_swap1(int arr[], int n){
    int left = 0;
    int right = n-1;
    while (left < right) {
        while (arr[left] == 0 && left < right) {
            left++;  // Move the left pointer to the right until it points to 1
        }

        while (arr[right] == 1 && left < right) {
            right--;  // Move the right pointer to the left until it points to 0
        }

        if (left < right) {
            arr[left] = 0;
            arr[right] = 1;
            left++;
            right--;
        }
    }
}

int main(){
    int arr[] = {0, 1, 0, 1, 0, 1, 0, 1, 0};
    int n = sizeof(arr) / sizeof(arr[0]);

    sort0_swap1(arr, n);

    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

return 0;
}