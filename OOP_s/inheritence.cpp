#include <iostream>
using namespace std;
class employee{
    public:
    int id;
    float sal;
    employee(){}
    employee(int ip){
        id= ip;
        sal = 34.0;
    }
};
class programmer : public employee{
    public:
    int langcode;
    programmer(int ip){
        id = ip;
        langcode = 9;
    }
    void getdata(){
        cout<<id<<endl;
    }
};
int main(){
employee dhruv(1), demo(2);
cout<<dhruv.sal<<endl;
cout<<demo.sal<<endl;
programmer rng(100);
cout<<rng.langcode<<endl;
cout<<rng.id<<endl;
rng.getdata();
return 0;
}


#include <iostream>
using namespace std;
class base{
    int data1;
    public:
    int data2;
    void setdata(){
        data1 = 20;
        data2 = 20;
    }
    int getdata1(){
        return data1;
    }
    int getdata2(){
        return data2;
    }
};
class derived : public base{
    int data3;
    public:
    void process(){
        data3 = data2 - getdata1();
    }
    void display(){
        cout<<"value is "<<getdata1()<<endl;
        cout<<"value is "<<data2<<endl;
        cout<<"value is "<<data3<<endl;
    }
};
int main(){
    derived der;
    der.setdata();
    der.process();
    der.display();
    return 0;
}


#include <iostream>
using namespace std;
class student{
    protected:
    int roll;
    public:
    void set_roll(int r){
        roll = r;
    }
    void get_roll(){
        cout<<roll<<endl;
    }
};
class exam : public student{
    protected:
    float maths;
    float cs;
    public:
    void set_marks(float m , float c){
        maths = m;
        cs = c;
    }
    void get_marks(){
        cout<<maths<<endl;
        cout<<cs<<endl;
    }
};
class result : public exam{
    float per;
    public:
    void display(){
        get_roll();
        get_marks();
        cout<<(maths+cs)/2<<endl;
    }
};
int main(){
    result demo;
    demo.set_roll(69);
    demo.set_marks(100, 100);
    demo.display();
return 0;
}

#include <iostream>
using namespace std;
class Base1{
protected:
    int base1int;
public:
    void set_base1int(int a){
        base1int = a;
    }
};
class Base2{
protected:
    int base2int;
public:
    void set_base2int(int a){
        base2int = a;
    }
};
class Base3{
protected:
    int base3int;
public:
    void set_base3int(int a){
        base3int = a;
    }
};
class Derived : public Base1, public Base2, public Base3{
    public: 
        void show(){
            cout << "The value of Base1 is " << base1int<<endl;
            cout << "The value of Base2 is " << base2int<<endl;
            cout << "The value of Base3 is " << base3int<<endl;
            cout << "The sum of these values is " << base1int + base2int + base3int << endl;
        }
};
int main(){
    Derived harry;
    harry.set_base1int(25);
    harry.set_base2int(5);
    harry.set_base3int(15);
    harry.show();
    return 0;
}


#include <iostream>
using namespace std;
class base1{
    public:
    void greet(){
        cout<<"yaharo"<<endl;
    }
};
class base2{
    public:
        void greet(){
            cout << "Kaise ho?" << endl;
        }
};
class Derived : public base1 , public base2{
    int a;
    public:
    void greet(){
        base2 :: greet();
    }
};
int main(){
     base1 base1obj;
     base2 base2obj;
     base1obj.greet();
     base2obj.greet();
     Derived d;
     d.greet();
    return 0;
}
