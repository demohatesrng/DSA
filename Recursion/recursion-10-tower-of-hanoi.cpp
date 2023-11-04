#include <iostream>
using namespace std;
void tower(int n, char a, char b, char c){
    if(n==0){
        return;
    }
    else{
        tower(n-1,a,c,b);
        cout<<"move disk "<<n<<" from "<<a<<" to "<<b<<endl;
        tower(n-1,c,b,a);
    }
}
int main(){
    int n = 3;
    char a = '1';
    char b = '2';
    char c = '3';
    tower(3,a,b,c);
return 0;
}