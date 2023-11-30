// First and Last Occurence
#include <iostream>
using namespace std;
// Function to find the first occurrence of a key in a sorted array
int first_occurrence(int arr[], int n, int key) {
    int s = 0;
    int e = n - 1;
    int first = -1;
    while (s <= e) {
        int mid = s + (e - s) / 2;
        if (arr[mid] == key) {
            first = mid;  // Update first occurrence
            e = mid - 1;  // Continue searching in the left subarray
        } else if (arr[mid] > key) {
            e = mid - 1;
        } else {
            s = mid + 1;
        }
    }
    return first;
}
// Function to find the last occurrence of a key in a sorted array
int last_occurrence(int arr[], int n, int key) {
    int s = 0;
    int e = n - 1;
    int last = -1;
    while (s <= e) {
        int mid = s + (e - s) / 2;
        if (arr[mid] == key) {
            last = mid;   // Update last occurrence
            s = mid + 1;  // Continue searching in the right subarray
        } else if (arr[mid] > key) {
            e = mid - 1;
        } else {
            s = mid + 1;
        }
    }
    return last;
}
int main() {
    int even[6] = {2, 3, 4, 4, 4, 7};
    int odd[5] = {1, 2, 3, 4, 5};
    int key = 4;

    int first_index = first_occurrence(even, 6, key);
    int last_index = last_occurrence(even, 6, key);

    if (first_index != -1) {
        cout << "First occurrence of " << key << " in even array at index: " << first_index << endl;
        cout << "Last occurrence of " << key << " in even array at index: " << last_index << endl;
    } else {
        cout << "Key " << key << " not found in even array." << endl;
    }
}


// Total number of occurence
#include <iostream>
using namespace std;
// Function to find the total number of occurrences of a key in a sorted array
int count_occurrences(int arr[], int n, int key) {
    int s = 0;
    int e = n - 1;
    int first = -1;
    int last = -1;
    // Find the first occurrence
    while (s <= e) {
        int mid = s + (e - s) / 2;

        if (arr[mid] == key) {
            first = mid;
            e = mid - 1;
        } 
        else if (arr[mid] > key) {
            e = mid - 1;
        } 
        else {
            s = mid + 1;
        }
    }
    // Find the last occurrence
    s = 0;
    e = n - 1;
    while (s <= e) {
        int mid = s + (e - s) / 2;
        if (arr[mid] == key) {
            last = mid;
            s = mid + 1;
        } else if (arr[mid] > key) {
            e = mid - 1;
        } else {
            s = mid + 1;
        }
    }
    // Calculate and return the total number of occurrences
    if (first != -1 && last != -1) {
        return last - first + 1;
    } 
    else {
        return 0; // Key not found in the array
    }
}
int main() {
    int even[6] = {2, 3, 4, 4, 4, 7};
    int odd[5] = {1, 2, 3, 4, 5};
    int key = 4;

    int total_occurrences = count_occurrences(even, 6, key);
    if (total_occurrences > 0) {
        cout << "Total occurrences of " << key << " in even array: " << total_occurrences << endl;
    } 
    else {
        cout << "Key " << key << " not found in even array." << endl;
    }
}


//sqrt code
class Solution {
public:
    int mySqrt(int x) {
        if (x == 0 || x == 1)
            return x;

        int start = 1;
        int end = x;
        int result = -1;

        while (start <= end) {
            int mid = start + (end - start) / 2;
            long long sqr = static_cast<long long>(mid) * mid;

            if (sqr == x)
                return mid;
            else if (sqr < x) {
                result = mid;
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        return result;
    }
};


//pivot element
#include <iostream>
using namespace std;
int pivot(int arr[], int n) {
    int s = 0;
    int e = n - 1;
int m = s + (e - s) / 2;
    while (s < e) {
        if (arr[m] >=arr[0]) {
            s = m+1;
        } 
        else {
            e = m;
        } 
        int m = s + (e - s) / 2;
    }
    return s;
}
int main() {
    int arr[10] = {1, 2, 3, 3, 3, 4, 4, 5, 6, 7};
    int n = 10;
    int key = 3;
    int ansIndex = pivot(arr, n);
}

//rotated sorted array
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int s = 0;
        int e = nums.size() - 1;

        while (s <= e) {
            int mid = s + (e - s) / 2;

            if (nums[mid] == target)
                return mid;

            if (nums[s] <= nums[mid]) {
                if (nums[s] <= target && target < nums[mid])
                    e = mid - 1;
                else
                    s = mid + 1;
            } 
            else {
                if (nums[mid] < target && target <= nums[e])
                    s = mid + 1;
                else
                    e = mid - 1;
            }
        }
        return -1;
    }
};