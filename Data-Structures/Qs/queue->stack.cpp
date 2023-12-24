#include <iostream>
#include <stack>
using namespace std;
class QueueFromStack {
    stack<int> inputStack;
    stack<int> outputStack;
public:
    void enqueue(int value) {
        inputStack.push(value);
    }
    int dequeue() {
        if (outputStack.empty()) {
            if (inputStack.empty()) {
                cout << "Queue is empty." << endl;
                return -1;
            }
            while (!inputStack.empty()) {
                outputStack.push(inputStack.top());
                inputStack.pop();
            }
        }
        int front = outputStack.top();
        outputStack.pop();
        return front;
    }
    bool isEmpty() {
        return inputStack.empty() && outputStack.empty();
    }
};
int main() {
    QueueFromStack queue;
    queue.enqueue(1);
}
