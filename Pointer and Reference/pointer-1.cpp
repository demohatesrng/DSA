//pointers
#include <iostream>
using namespace std;
int main(){
    int num = 5;
    cout<<"printing num ";
    cout<<num<<endl;
    cout<<"printing address of num ";
    cout<<(&num)<<endl;
    // address of operator
    // stored in hexadeciaml format
    int *ptr = &num;
    cout<<"value of num by using deference operator * ";
    cout<<(*ptr)<<endl;
    cout<<"address of num ";
    cout<<(ptr)<<endl;
    ++num;
    cout<<"printing incremented num ";
    cout<<(*ptr)<<endl;
    cout<<"address of num ";
    cout<<&(*ptr)<<endl;
    cout<<"printing the size of num and rememebr it is always double of the data type ";
    cout<<sizeof(&(*ptr))<<endl; // always double of the data type

    cout<<" "<<endl;
    
    cout<<" "<<endl;
    int var = 5;
    int *a = &var;
    cout<<"a before was "<< var<<endl;
    a++;
    cout<<"a after increment "<< var<<endl;

    int *p = &var;
    cout<<"a before "<< var<<endl;
    (*p)++;
    cout<<"a after "<< var<<endl;

        //copying a pointer
        cout<<"copying a pointer "<<endl;
    int *q = p;
    cout<<"address of p and q"<<endl;
    cout<<p<<endl;
    cout<<q<<endl;
    cout<<"values of p and q"<<endl;
    cout<<*p<<endl;
    cout<<*q<<endl;

return 0;
}