#include <iostream>
#include <stack>
using namespace std;
void insertSorted(stack<int>& stack, int element){
    if(stack.empty() || element > stack.top()){
        stack.push(element);
        return;
    }
    int top = stack.top();
    stack.pop();
    insertSorted(stack, element);
    stack.push(top);
}
void sortStack(stack<int>& stack){
    if (!stack.empty()) {
        int top = stack.top();
        stack.pop();
        sortStack(stack);
        insertSorted(stack, top);
    }
}
int main(){
    stack<int> s;
    s.push(5);
    s.push(2);
    s.push(9);
    s.push(1);
    s.push(7);

    sortStack(s);

    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout<<endl;
}