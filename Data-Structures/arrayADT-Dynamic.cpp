#include <iostream>
using namespace std;
class DynamicArray {
private:
    int* arr;
    int capacity;
    int size;

public:
    DynamicArray(int initialCapacity) {
        capacity = initialCapacity;
        size = 0;
        arr = new int[capacity];
    }

    ~DynamicArray() {
        delete[] arr;
    }

    void insert(int element) {
        if (size < capacity) {
            arr[size++] = element;
        } 
        else {
            // If the array is full, double the capacity and copy elements to a new array
            capacity *= 2;
            int* newArr = new int[capacity];
            for (int i = 0; i < size; i++) {
                newArr[i] = arr[i];
            }
            delete[] arr;
            arr = newArr;
            arr[size++] = element;
        }
    }

    void traverse() {
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};
int main() {
    DynamicArray dynamicArr(5);

    dynamicArr.insert(1);
    dynamicArr.insert(2);
    dynamicArr.insert(3);
    dynamicArr.insert(4);
    dynamicArr.insert(5);

    cout << "Dynamic Array: ";
    dynamicArr.traverse();

    dynamicArr.insert(6); // Exceeding initial capacity, the array will dynamically resize

    cout << "Dynamic Array after insertion: ";
    dynamicArr.traverse();

    return 0;
}