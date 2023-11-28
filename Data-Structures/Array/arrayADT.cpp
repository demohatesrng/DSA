#include <iostream>
using namespace std;
class Array{
    private:
        int size;
        int capacity;
        int* arr;
    
    public:
        Array(int capacity){
            this->size = 0;
            this->capacity = capacity;
            arr = new int[capacity];
        }
        void traverse(){
            for (int i = 0; i < size; i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
    void reverse(){
        int start = 0;
        int end = size -1;
            while(start<end){
                swap(arr[start], arr[end]);
                start++;
                end--;
            }
    }
    int search(int element){
        for (int i = 0; i < size; i++){
            if(arr[i]==element){
                return i;
            }
        }
        return false;
    }
    void insert(int element){
        if(size<capacity){
            arr[size++]=element;
        }
        else{
            cout<<"invalid size"<<endl;
        }
    }
    void deleteat(int index){
        if(index >= 0 && index <= size){
            for (int i = index; i < size - 1; i++){
                arr[i]=arr[i+1];
            }
            size --;
        }
    }
};
int main(){
    Array arr1(9);
    arr1.insert(4);
    arr1.insert(5);
    arr1.insert(6);

    cout << "Original Array: ";
    arr1.traverse();

    arr1.reverse();
    cout << "Reversed Array: ";
    arr1.traverse();

    arr1.deleteat(1);
    cout << "Array after deletion: ";
    arr1.traverse();

return 0;
}