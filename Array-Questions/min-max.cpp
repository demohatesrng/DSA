#include <iostream>
using namespace std;
void maxarr(int arr[], int s){
    int max = 0;
    for(int i = 0; i<s; i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    cout<< max<<endl;
}
void minarr(int arr[], int s){
    int min = arr[0];
    for(int i = 0; i<s; i++){
        if(min>arr[i]){
            min = arr[i];
        }
    }
    cout<<min<<endl;
}
int main() {
    int arr[6] = {45, 67, 34, 123, 88, 5};
    maxarr(arr, 6);
    minarr(arr, 6);

    return 0;
}
