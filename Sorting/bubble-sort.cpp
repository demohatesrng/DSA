//Bubble sort
// time complexity is O(n2)
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
void printarr(int array[],int y){
    for (int i = 0; i < y-1; i++){
        cout<<" "<<array[i];
        
    }
    cout<<endl;
}
int main(){
    int even[6]={34,2,5,54,67,22};
    bubblesort(even,6);
    printarr(even,6);
return 0;
}