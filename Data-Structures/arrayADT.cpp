#include <iostream>
using namespace std;
class Array {
private:
    int capacity;
    int size;
    int* arr;

public:
    Array(int capacity) {
        this->capacity = capacity;
        this->size = 0;
        arr = new int[capacity];
    }

    ~Array() {
        delete[] arr;
    }

    void traverse() {
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    int search(int element) {
        for (int i = 0; i < size; i++) {
            if (arr[i] == element) {
                return i;
            }
        }
        // If the element is not found, return -1
        return -1;
    }

    void reverse() {
        int start = 0;
        int end = size - 1;
        while (start < end) {
            swap(arr[start], arr[end]);
            start++;
            end--;
        }
    }

    void insert(int element) {
        if (size < capacity) {
            arr[size++] = element;
        }
        else{
            cout<<"invalid size of the array"<<endl;
        }
    }

    void deleteat(int index) {
        if (index >= 0 && index < size) {
            for (int i = index; i < size - 1; i++) {
                arr[i] = arr[i + 1];
            }
            size--;
        }
    }
};

int main() {
    Array arr1(9);
    arr1.insert(4);
    arr1.insert(5);
    arr1.insert(6);

    cout << "Original Array: ";
    arr1.traverse();

    arr1.reverse();
    cout << "Reversed Array: ";
    arr1.traverse();

    arr1.deleteat(2);
    cout << "Array after deletion: ";
    arr1.traverse();

    return 0;
}