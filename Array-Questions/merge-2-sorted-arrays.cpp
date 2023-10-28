#include <iostream>
using namespace std;
void mergearr(int arr1[], int arr2[], int n, int m, int arr3[3]){
    int i = 0;
    int j = 0;
    int k = 0;
    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
                arr3[k]=arr1[i];
                k++;
                i++;
            }
        else{
            arr3[k]=arr2[j];
            k++;
            j++;
        }
    }
    while(i<n){
        arr3[k++]=arr1[i++];
    }
    while(j<m){
        arr3[k++]=arr1[j++];
        }
}
int main() {
    void mergearr(int arr1[], int arr2[], int n, int m, int arr3[]);
    int arr1[] = {1, 3, 5, 7, 9};
    int arr2[] = {2, 4, 6, 8, 10};
    int n = sizeof(arr1) / sizeof(arr1[0]);
    int m = sizeof(arr2) / sizeof(arr2[0]);
    int arr3[n + m];

    mergearr(arr1, arr2, n, m, arr3);
    cout << "Merged Array: ";
    for (int i = 0; i < n + m; i++) {
        cout << arr3[i] << " ";
    }
    cout << endl;
return 0;
}