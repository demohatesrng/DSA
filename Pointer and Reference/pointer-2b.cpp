#include<iostream>
using namespace std;
void print(int *p) {
    cout << *p << endl; 
}
void update(int *p) {
   p = p + 1;
   cout << "inside "<< p <<endl;
   *p = *p + 1;
}
int getSum(int *arr, int n) {
    
    int sum = 0;
    for(int i=0;i<n;i++) {
        sum += arr[i];
    }
    cout<<endl;
    // cout<<"pointer pass ho rha h "<<endl;
    return sum;
}
int main() {
    int value = 5;
    int *p = &value;

    print(p);
    cout <<" Before " << *p << endl;
    cout<<"address of p is " <<&p<<endl;
    update(p);
    cout <<"After update value of p is " << *p << endl;
    cout<<"address of p is " <<&p<<endl;

    int arr[5] = {1,2,3,4,5};

    cout << "Sum is " << getSum(arr + 2,2) << endl ;

    return 0;
}