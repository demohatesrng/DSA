#include <iostream>
#include <array>
using namespace std;
int main(){
    array<int ,5> arr={3,6,9,12,15};
    int size = arr.size();

    for (int i = 0; i < size; i++){
        cout<<arr[i]<<endl;
    }

    cout<<"element at index 2 : "<<arr.at(2)<<endl;
    cout<<"empty "<<arr.empty()<<endl;

    cout<<"first element is "<<arr.front()<<endl;
    cout<<"last element is "<<arr.back()<<endl;
    
return 0;
}