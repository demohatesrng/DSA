#include <iostream>
using namespace std;
class number{
    int a;
    public:
    number(){
        a = 0;
    }
    number(int num){
        a= num;
    }
    void display(){
        cout<<"the number is "<<a<<endl;
    }
    number(number &obj){
        cout<<"copy constructor called"<<endl;
        a = obj.a;
    }
};
int main(){
    number x, y, z(45), z2;
    x.display();
    y.display();
    z.display();

    number z1(z); // Copy constructor invoked
    z1.display();

    number z3 = z; // Copy constructor invoked
    z3.display();
    return 0;
}
