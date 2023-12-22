//ARRAY STACK CLASS
#include <iostream>
using namespace std;
class stack{
    public:
        int* arr;
        int size;
        int top;
    
        stack(int size){
            this->size = size;
            arr = new int[size];
            top = -1; // initialise stack with empty state
        }
    bool isempty(){
        return top == -1;
    }
    bool isFull() {
    return top == size - 1; // Use '==' instead of '='
    } 
    void push(int data){
        if(isFull()){
            cout<<"stack is full "<<data<<endl;
            return;
        }
        arr[++top] = data;
    }
    void pop(){
        if(isempty()){
            cout<<"stack is empty"<<endl;
            return;
        }
        --top;
    }
    int peep(){
        if(isempty()){
            cout<<"empty"<<endl;
            return -1;
        }
        return arr[top];
    }
    void display() {
        if (isempty()) {
            cout << "Stack is empty" << endl;
            return;
        }

        cout << "Stack elements: ";
        for (int i = 0; i <= top; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};
int main(){
    stack stack(7);
    stack.push(1);
    stack.push(2);
    stack.push(3);
    stack.push(4);
    stack.push(5);
    stack.push(6);
    stack.push(7);
    stack.push(8);
    stack.display();

    cout << "Top element: " << stack.peep() << endl;

    stack.pop();
    cout << "Top element after pop: " << stack.peep() << endl;

    stack.pop();
    stack.pop();
    stack.pop(); // Trying to pop from an empty stack

    return 0;
}

//STL IMPLEMENTATION OF STACK
// #include <iostream>
// #include <stack>
// using namespace std;
// int main(){
//     stack<int> s;
//     s.push(4);
//     s.push(2);
//     s.push(6);
//     s.push(5);
//     s.push(12);
// //pop element
//     s.pop();
//     //printing top element
//     cout<<s.top()<<endl;
// //check for empty stack
//     if(s.empty())
//         cout<<"stack is empty"<<endl;
//     else{
//         cout<<"not empty"<<endl;
//     }
//     cout<<s.size()<<endl;
// return 0;
// }