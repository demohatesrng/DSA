#include <iostream>
#define pi 3.14 //no memeory is alloted
int m = 45; // global variable
using namespace std;
inline void saale(int q){
    cout<<"hi"<<endl;
}
void timepass(int t , int y = 90){
    cout<<"this is a time pass function"<<endl;
    cout<<"initialization will start from right most side "<<endl;
}
int main(){
    cout<<"value of global variable is "<<(::m)<<endl;
    int r = 5;
    double area= r*r*pi;
    cout<<"area is: "<<area<<endl;
    cout<<"--------------------------"<<endl;
    timepass(5);
return 0;
}