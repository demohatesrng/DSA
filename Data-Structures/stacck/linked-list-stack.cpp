#include <iostream>
using namespace std;
class Node {
    public:
        int data;
        Node* next;
        Node(int data){
            this->data = data;
            this->next = nullptr;
        }
};
class Stack {
    private:
        Node* top;
    public:
        Stack(){
            this->top = nullptr;
        }
        void push(int data) {
            Node* newNode = new Node(data);
            newNode->next = top;
            top = newNode;
        }

        void pop() {
            if (isEmpty()) {
                cout << "Stack is empty. Cannot pop." << endl;
                return;
            }
            Node* temp = top;
            top = top->next;
            delete temp;
        }

        int peek() {
            if (isEmpty()) {
                cout << "Stack is empty. Cannot peek." << endl;
                return -1;
            }
            return top->data;
        }

        bool isEmpty() {
            return top == nullptr;
        }
        
        void display() {
        Node* cursor = top;
        cout << "Stack: ";
        while (cursor != nullptr) {
            cout << cursor->data << " ";
            cursor = cursor->next;
        }
        cout << endl;
    }
    int search(int x) {
        int position = 1;
        Node* cursor = top;
        while (cursor != nullptr) {
            if (cursor->data == x) {
                return position;
            }
            cursor = cursor->next;
            position++;
        }
        return -1; // Element not found
    }
};
int main() {
    Stack stack;

    stack.push(1);
    stack.push(2);
    stack.push(3);
    stack.display();

    cout << "Top element: " << stack.peek() << endl;

    stack.pop();
    cout << "Top element after pop: " << stack.peek() << endl;
    stack.display();

    return 0;
}