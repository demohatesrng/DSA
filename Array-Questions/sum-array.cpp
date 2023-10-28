#include <iostream>
using namespace std;
void sumarr(int arr[], int s){
    int sum = 0;
    for(int i = 0; i<s; i++){
        sum+=arr[i];
    }
    cout<< sum<<endl;
}
int main() {
    int arr[6] = {45, 67, 34, 123, 88, 5};
    sumarr(arr, 6);

    return 0;
}
