#include <iostream>
using namespace std;
class Node {
public:
    int data;
    Node* next;

    Node(int value){
        this->data = data;
        this->next = nullptr;
    }
};

class Queue {
private:
    Node* front;
    Node* rear;

public:
    Queue() : front(nullptr), rear(nullptr) {}

    ~Queue() {
        while (!isEmpty()) {
            dequeue();
        }
    }

    bool isEmpty() {
        return front == nullptr;
    }

    void enqueue(int item) {
        Node* newNode = new Node(item);

        if (isEmpty()) {
            front = rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty. Cannot dequeue." << endl;
            return;
        }

        Node* temp = front;
        front = front->next;
        delete temp;
    }

    int peek() {
        if (isEmpty()) {
            cerr << "Queue is empty. Cannot peek." << endl;
            return -1; // Return a default value
        }
        return front->data;
    }
};
int main() {
    Queue queue;

    queue.enqueue(1);
    queue.enqueue(2);
    queue.enqueue(3);

    cout << "Front element: " << queue.peek() << endl;

    queue.dequeue();
    cout << "Front element after dequeue: " << queue.peek() << endl;

    return 0;
}
