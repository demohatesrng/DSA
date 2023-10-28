#include <iostream>
using namespace std;
void move_0(int arr[], int n) {
    int i = 0;
    for (int j = 0; j < n; j++) {
        if (arr[j] != 0) {
            if (i != j) {
                swap(arr[i], arr[j]);
            }
            i++;
        }
    }
}
int main(){
    int arr[] = {1, 0, 3, 0, 5, 0, 0, 7, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    move_0(arr, n);

    cout << "Modified Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
return 0;
}