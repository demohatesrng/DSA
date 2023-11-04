#include <iostream>
using namespace std;
int factorial(int n){
    if(n<=1)
        return 1;
    else{
        return n * factorial(n-1);
    }
}
int power(int n){
    if (n==0)
    return 1;
    return 2 * power(n-1);
}
int counting(int n){
    if(n==0)
        return 0;
    cout<<n<<" ";
    return counting(n-1);
}
// binary representation
void fun2(int n){
if(n == 0)
	return;
fun2(n/2);
cout << n%2 << endl;
}
int main(){
    int n = 5;
    cout<<factorial(n)<<endl;
    cout<<power(6)<<endl;
    cout<<counting(6)<<endl;
    fun2(6);
return 0;
}