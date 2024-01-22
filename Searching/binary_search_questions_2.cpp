// Book Allocation Problem
#include <iostream>
using namespace std;
bool isPossible(int arr[], int n , int m , int mid){
    int student = 1;
    int pageSum = 0;

    for (int i = 0; i < n; i++){
        if(pageSum +arr[i] <= mid){
            pageSum += arr[i];
        }
        else{
            student++;
            if(student > m || arr[i] > mid){
                return false;
            }
            pageSum += arr[i];
        }
    }
    return true;
}
int Allocation(int arr[], int n, int m){
    int start = 0;
    int sum = 0;

    for (int i = 0; i < n; i++){
        sum+= arr[i];
    }
    int end = sum;
    int ans = -1;
    int mid = start+(end-start)/2;

    while(start<=end){
        if(isPossible(arr,n,m,mid)){
            ans = mid;
            end = mid-1;
        }
        else{
            start = mid+1;
        }
        mid = start+(end-start)/2;
    }
    return ans;
}

// Painter partition Problem
#include <iostream>
using namespace std;
int sum(int arr[], int from, int to){
    int total = 0;
    for (int i = from; i <= to; i++)
        total += arr[i];
    return total;
}
// for n boards and k partitions
int partition(int arr[], int n, int k){
    // base cases
    if (k == 1) // one partition
        return sum(arr, 0, n - 1);
    if (n == 1) // one board
        return arr[0];
    int best = INT_MAX;
 
    for (int i = 1; i <= n; i++)
        best = min(best, max(partition(arr, i, k - 1), sum(arr, i, n - 1)));
    return best;
}

// Aggressive Cows
#include <iostream>
using namespace std;

int main(){}