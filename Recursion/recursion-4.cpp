// reverse a string
#include <iostream>
using namespace std;
void reversestring(string& str, int i, int j){
    if(i>j){
        return ;
    }
    swap(str[i], str[j]);
    i++;
    j--;

    reversestring(str, i , j);
}
int main(){
    string name = "Dhruv";
    reversestring(name , 0 , name.length()-1);
    cout<<name<<endl;
return 0;
}

//palindrome question
#include <iostream>
using namespace std;
bool palindrome(string& str, int i, int j) {
    if (i >= j)
        return true;

    if (str[i] != str[j]) {
        return false;
    } 
    else {
        return palindrome(str, i + 1, j - 1);
    }
}
int main() {
    string name = "Dhruv";
    int ans = palindrome(name, 0, name.length() - 1);
    cout << ans << endl;
}


// bubble sort
void arrsort(int arr[], int n){
    if(n==0 || n==1){
        return ;
    }
    for (int i = 0; i < n-1; i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
        arrsort(arr, n-1);
}