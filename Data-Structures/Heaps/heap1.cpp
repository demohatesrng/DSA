#include <iostream>
using namespace std;

class heap{
public:
    int arr[100];
    int size;
    
    heap(){
        arr[0] = -1;
        size = 0;
    }

    void insert(int val){
        size = size + 1;
        int index = size;
        arr[index] = val;

        while(index > 1){
            int parent = index / 2;
            if(arr[parent] < arr[index]){
                swap(arr[parent], arr[index]);
                index = parent;
            }
            else{
                return;
            }
        }
    }

    void heapify(int idx){
        int largest = idx;
        int left = 2 * idx;
        int right = 2 * idx + 1;

        if(left <= size && arr[left] > arr[largest]){
            largest = left;
        }

        if(right <= size && arr[right] > arr[largest]){
            largest = right;
        }

        if(largest != idx){
            swap(arr[idx], arr[largest]);
            heapify(largest);
        }
    }

    void deleteRoot(){
        if(size <= 0){
            cout << "Heap is empty!" << endl;
            return;
        }

        arr[1] = arr[size];
        size = size - 1;
        heapify(1);
    }

    void heapSort(){
        int originalSize = size;

        for(int i = size / 2; i >= 1; i--){
            heapify(i);
        }

        for(int i = size; i > 1; i--){
            swap(arr[1], arr[i]);
            size = size - 1;
            heapify(1);
        }

        size = originalSize; // Restore the original size
    }

    int search(int val) {
        for (int i = 1; i <= size; i++) {
            if (arr[i] == val) {
                return i; // Return the index if found
            }
        }
        return -1; // Return -1 if not found
    }

    void print(){
        for(int i = 1; i <= size; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main(){
    heap h;
    h.insert(50);
    h.insert(30);
    h.insert(20);
    h.insert(70);
    h.insert(40);
    h.insert(10);

    cout << "Original heap: ";
    h.print();

    int searchValue = 70;
    int index = h.search(searchValue);
    if (index != -1) {
        cout << "Value " << searchValue << " found at index " << index << endl;
    } else {
        cout << "Value " << searchValue << " not found in the heap." << endl;
    }

    cout << "Heap after deletion: ";
    h.deleteRoot();
    h.print();

    cout << "Heap sort: ";
    h.heapSort();
    h.print();

    return 0;
}