#include <iostream>
using namespace std;
int linear_search(int arr[] , int size , int key){
    for (int i = 0; i < size; i++){
        if (arr[i]==key){
            return 1;
        }
    }
    return 0;
}
int main(){

    int arr[10] = {34,12,54,343,78,23,12,66,44,45};
    cout<<"enter the search element"<<endl;
    int key;
    cin>>key;

    bool found = linear_search(arr , 10, key);
    if (found){
        cout<<"key is present "<<endl;
    }
    else{
        cout<<"key is not present"<<endl;
    }
    return 0;
}