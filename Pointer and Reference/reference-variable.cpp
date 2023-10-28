#include <iostream>
using namespace std;
void update2(int& n) {
    n++;
}
void update1(int a) {
    a++;
}
int main(){
    int n=10;
    int & a = n;
    cout<<"print the value of n and a"<<endl;
    cout<<a<<endl;
    cout<<n<<endl;
    cout<<"calling update for both"<<endl;
    update1(a);
    update2(n);
    cout<<"print the value of n and a after update"<<endl;
    cout<<a<<endl;
    cout<<n<<endl;

    int i = 5;
    int &j=i;
    cout<<"i "<<i<<endl;
    cout<<"j "<<j<<endl;
    cout<<"the address of i and j are "<<endl;
    cout<<"&i "<<&i<<endl;
    cout<<"&j "<<&j<<endl;
return 0;
}


#include<iostream>
using namespace std;
int getSum(int *arr, int n) {
    int sum = 0;
    for(int i=0; i<n; i++) {
        sum += arr[i];
    } 
    return sum;
}
int main() {
    int n;
    cin >> n;
    //variable size array
    int* arr = new int[n];

    //takign inputn in aray
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    int ans = getSum(arr, n);
    cout << "answer is "<< ans << endl;

//case 1
    while(true) {
        int i = 5;
    }
    
//case 2
    while(true) {
        int* ptr = new int;
    }
    return 0;
}