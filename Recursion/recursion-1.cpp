#include <iostream>
using namespace std;
int factorial(int n){
    if(n<=1)
        return 1;
        return n * factorial(n-1);
}
int power(int n){
    if (n==0)
    return 1;
    return 2 * power(n-1);
}
int counting(int n){
    if(n==0)
        return 1;
    cout<<n<<" ";
    return counting(n-1);
}
int main(){
    int n = 5;
    cout<<factorial(n)<<endl;
    cout<<power(6)<<endl;
    cout<<counting(6)<<endl;
return 0;
}