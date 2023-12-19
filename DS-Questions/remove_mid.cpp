#include <iostream>
#include <stack>
using namespace std;
void solve(stack<int> &inputstack, int count, int size) {
    if(count == size / 2){
        inputstack.pop();
        return;
    }
    int num = inputstack.top();
    inputstack.pop();

    solve(inputstack, count + 1, size);
    inputstack.push(num);
}
int main() {
    stack<int> inputstack;
    inputstack.push(1);
    inputstack.push(2);
    inputstack.push(3);

    int size = inputstack.size();
    solve(inputstack, 0, size);

    while(!inputstack.empty()){
        cout << inputstack.top() << " ";
        inputstack.pop();
    }
}