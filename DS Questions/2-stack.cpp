// 2 STACK CLASS
#include <iostream>
using namespace std;
class Stack{
    public:
        int size;
        int top1;
        int top2;
        int*arr;

    Stack(int s){
        this->size = s;
        top1 = -1;
        top2 = s;
        arr=  new int[s];
    }
    void push1(int d1){
        if(top2-top1>1){
            top1++;
            arr[top1]==d1;
        }
        else{
            cout<<"stack overflow"<<endl;
        }
    }
    void push2(int d2){
        if(top2-top1>1){
            top2--;
            arr[top2]= d2;
        }
        else{
            cout<<"stack overflow"<<endl;
        }
    }
    int pop1(){
        if(top1 >0){
            int ans = arr[top1];
            top1--;
            return ans;
        }
        else{
            return -1;
        }
    }
     int pop2(){
        if(top2 < size){
            int ans = arr[top2];
            top2--;
            return ans;
        }
        else{
            return -1;
        }
    }
};