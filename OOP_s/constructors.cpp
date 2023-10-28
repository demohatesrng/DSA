#include <iostream>
using namespace std;
class complex{
    int a, b;
    public:
    complex(void){
        a= 10;
        b= 10;
    }
    void print(){
        cout<<a<< b;
    }
};
int main(){
    complex o;
    o.print();
return 0;
}


#include <iostream>
using namespace std;
class point{
    int x, y;
    public:
    point(int a, int b){
        x = a;
        y = b;
    }
    void display(){
        cout<<"the point is"<<x<<" "<<y<<endl;
    }
};
int main(){
    point p (1,1);
    p.display();
return 0;
}

#include <iostream>
using namespace std;
class simple{
    int data1, data2 , data3;
    public:
    simple(int a , int b=9 , int c =8){
        data1 = a;
        data2 = b;
        data3 = c;
    }
    void print(){
        cout<<data1<<" "<<data2<<" "<<data3<<endl;
    }
};
int main(){
    simple date(3,6);
    date.print();
    simple dat(4);
    dat.print();
return 0;
}