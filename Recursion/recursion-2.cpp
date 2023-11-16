#include <iostream>
using namespace std;
//destination problem
void home(int src, int desc){
    cout<<src<<" and\t"<<desc<<endl;
    if (src==desc){
        cout<<"reached home"<<endl;
    }
    src+=2;
    if(src>desc){
        exit(0);
    }
    home(src,desc);
}
//fibonacci
int fib(int n){
    if(n==1)
        return 1;
    if(n==0)
        return 0;
    int ans =  fib(n-2) + fib(n-1);
        return ans;
}

//stair case problem
int staircase(int n){
    if (n < 0)
        return 0;
    if (n == 0)
        return 1;
    int ans = staircase(n - 1) + staircase(n - 2);
    return ans;
}
int main(){
    int desc = 20;
    int src = 2;
    // home(src,desc);
    cout<<"fibonacci of 5 is " <<fib(10)<<endl;
    cout<<staircase(5)<<endl;
return 0;
}
