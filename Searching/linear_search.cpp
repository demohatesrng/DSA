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
}

// Recursive Way 
#include <iostream>
using namespace std;
int linearsearch(int arr[] , int n, int key){
    if(n==0)
        return false;

    if (arr[0]==key)
        return true;
    
    else{
        bool remaining = linearsearch(arr+1,n-1, key);
        return remaining;
    }
}
int main(){
    int arr[6]={2,3,46,57,23,9};
    int size = 6;
    int key = 23;

    bool ans = linearsearch(arr,6,key);
    if(ans){
        cout<<"present"<<endl;
    }
    else{
        cout<<"absent"<<endl;
    }
}