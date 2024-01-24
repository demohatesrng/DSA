//First and last position in sorted array
/*
#include <iostream>
using namespace std;
int firstOcc(int arr[], int size, int key){
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;
    while (start <= end) {
        if (arr[mid] == key){
            ans = mid;
            end = mid-1;
        }
        if (key > arr[mid]){
            start = mid + 1;
        } 
        else {
            end = mid - 1;
        }
        int mid = start + (end - start) / 2;
    }
    return ans;
}
int lastOcc(int arr[], int size, int key){
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;
    while (start <= end) {
        if (arr[mid] == key){
            ans = mid;
            start = mid + 1;
        }
        if (key > arr[mid]){
            start = mid + 1;
        } 
        else {
            end = mid - 1;
        }
        int mid = start + (end - start) / 2;
    }
    return ans;
}
int main(){
    int even[10] = {1,2, 3, 4, 4, 4, 5, 6, 7};
    int firstindex = firstOcc(even, 10, 4);
    cout << "first occ of 4 in array: " << firstindex << endl;
    int lastindex = lastOcc(even, 10, 4);
    cout << "last occ of 4 in array: " << lastindex << endl;

    int totalOccurrences = (lastindex - firstindex) + 1;
    cout<<"total occurrences are "<< totalOccurrences <<endl;
}

// Peak element in Mountain Array
#include <iostream>
using namespace std;
int PeakElement(int arr[], int n){
    int s = 0;
    int e = n-1;
    int m = s+(e-s)/2;
    while(s<=e){
        if(arr[m]<arr[m-1]){
            s=m+1;
        }
        else{
            e=m;
        }
        m = s+(e-s)/2;
    }
    return s;
}
int main(){
    int even[6] = {2, 3, 4, 5, 6, 7};
    int peakky = PeakElement(even, 6);
    cout << "peak in array: " << peakky << endl;
return 0;
}

// Find Pivot in array -> min of array
#include <iostream>
using namespace std;
int pivot_element(int arr[], int n){
    int s = 0;
    int e = n-1;
    int m = s+(e-s)/2;
    while(s<=e){
        if(arr[m]>=0){
            s = m+1;
        }
        else{
            e=m;
        }
        int m = s+(e-s)/2;
    }
    return s;
}
int main(){
    int arr[10]={7,9,1,2,3,4,5,6};
    cout<<"pivot element is "<<pivot_element(arr,10);
}

//Search in Rotated Sorted Array
#include <iostream>
#include <vector>
using namespace std;
int binary_search(vector<int>&arr, int s, int e, int key) {
    int start = s;
    int end = e;
    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (arr[mid] == key) {
            return mid;
        }
        if (key > arr[mid]) {
            start = mid + 1;
        } 
        else {
            end = mid - 1;
        }
    }
    return -1;
}
int pivot_element(vector<int>&arr, int n){
    int s = 0;
    int e = n-1;
    int m = s+(e-s)/2;
    while(s<=e){
        if(arr[m]>=0){
            s = m+1;
        }
        else{
            e=m;
        }
        int m = s+(e-s)/2;
    }
    return s;
}
int findPos(vector<int>&arr ,int n, int k){
    int pivot = pivot_element(arr,10);
    if(k >= arr[pivot] && k<=arr[n-1]){
        return binary_search(arr,pivot,n-1,k);
    }
    else{
        binary_search(arr,0,pivot-1,k);
    }
}
int main(){}
*/