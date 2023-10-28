#include <iostream>
using namespace std;
void pair_sum(int arr[], int n, int target){
    for (int i = 0; i < n-1; i++){
        for (int j = i+1; j < n; j++){
            if (arr[i]+arr[j]==target){
                cout<<"pair found "<<arr[i]<<" and "<<arr[j]<<endl;
            }    
        }  
    }
}
int main(){
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 8;

    pair_sum(arr, n, target);

    return 0;
}
