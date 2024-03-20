// #include <iostream>
// using namespace std;
// void merge(int arr[], int s, int m , int e){
//     int len1 = m - s+1;
//     int len2 = e - s;

//     int* first = new int[len1];
//     int* second = new int[len2];

//     for(int i = 0; i< len1; i++){
//         first[i] = arr[s+i];
//     }
//     for(int i = 0; i< len2; i++){
//         second[i] = arr[m+1+i];
//     }

//     int i = 0;
//     int j = 0;
//     int k = s;

//     while(i<len1 && j<len2){
//         if(first[i]<second[j]){
//             arr[k]=first[i];
//             i++;
//         }
//         else{
//             arr[k]=second[j];
//             j++;
//         }
//         k++;
//     }

//     while (i < len1) {
//         arr[k] = first[i];
//         i++;
//         k++;
//     }
//     while (j < len2) {
//         arr[k] = second[j];
//         j++;
//         k++;
//     }

//     delete[] first;
//     delete[] second;

// }
// void mergesort(int arr[], int s, int e){
//     if(s<e){
//         int m = s+(e-s)/2;
//         mergesort(arr,s,m);
//         mergesort(arr,m,e);
//         merge(arr,s,m,e);
//     }
// }
// int main(){
//     int arr[8] = {34, 56, 78, 3, 41, 26, 32, 22};
//     int n = 8;
//     mergesort(arr, 0, n - 1);

//     cout << "Sorted array: ";
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
// return 0;
// }

#include <iostream>
using namespace std;
int partition(int arr[], int s, int e){

}
void quicksort(int arr[], int s, int e){
    if (s>=e)
        return;
    int p = partition(arr, s, e);
    quicksort(arr, s, p - 1);
    quicksort(arr, p + 1, e);
}
int main(){
    int arr[6] = {2, 4, 5, 1, 3};
    int n = 6;
    quicksort(arr, 0, n - 1);
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}