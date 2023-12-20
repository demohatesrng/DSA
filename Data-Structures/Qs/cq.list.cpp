#include <iostream>
using namespace std;
class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = nullptr;
    }
};
class CircularQueue {
    Node* rear;

public:
    CircularQueue() {
        rear = nullptr;
    }

    bool isEmpty() {
        return rear == nullptr;
    }

    void enqueue(int value) {
        Node* newNode = new Node(value);

        if (isEmpty()) {
            newNode->next = newNode;
            rear = newNode;
        } else {
            newNode->next = rear->next;
            rear->next = newNode;
            rear = newNode;
        }
    }
    void dequeue() {
        if (isEmpty()) {
            cout << "queue is empty";
            return;
        }

        Node* front = rear->next;
        if (front == rear) {
            delete front;
            rear = nullptr;
        } else {
            rear->next = front->next;
            delete front;
        }
    }
    int peek() {
        if (isEmpty()) {
            cout << "queue is empty";
            return -1;
        }
        return rear->next->data;
    }
};
int main() {
    CircularQueue queue;
    queue.enqueue(5);
    queue.enqueue(10);
    queue.enqueue(15);

    cout << "Front element: " << queue.peek() << endl;

    queue.dequeue();
    cout << "Front element after dequeue: " << queue.peek() << endl;
}