#include <iostream>
using namespace std;

int main(){
    int i = 5;
    int *p = &i;
    int ** p2 = &p;
    cout<<"-------------------------------------"<<endl;
    cout<<"address of double pointer is "<<&p2<<endl;
    cout<<"value of double pointer is "<<p2<<endl;
    cout<<"address of single pointer is "<<&p<<endl;
    cout<<"address/value of double pointer is "<<*(*p2)<<endl;

    cout<<" "<<endl;

    cout<<"value of i is  "<<i<<endl;
    cout<<" again the value of i is "<<*p<<endl;
    cout<<" value of i is by dereferencing the pointer to a pointer "<<**p2<<endl;

    cout<<" "<<endl;

    cout<<&i<<endl;
    cout<<p<<endl;
    cout<<*p2<<endl;

    cout<<" "<<endl;
return 0;
}