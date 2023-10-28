//SEIVE OF ERATOSTHENES
#include <iostream>
#include <vector>
using namespace std;
bool prime(int n){
    if(n<=1){
        return false;
    }
    for (int i = 2; i < n; i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int countpime(int n){
    int cnt = 0;
    vector <bool> prime(n+1, true);
    prime[0]=prime[1]=false;
    for (int i = 2; i < n; i++){
        if(prime[i]){
            cnt++;
        for (int j = 2*i; j < n; j+1){
            prime[j]=0;
            }
        }
    }
}
int main(){
    
return 0;
}