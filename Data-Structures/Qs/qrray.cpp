#include <iostream>
using namespace std;
const int MAX_SIZE = 100;
class Queue {
    int arr[MAX_SIZE];
    int front;
    int rear;
public:
    Queue() {
        front = -1;
        rear = -1;
    }

    bool isEmpty() {
        return front == -1 && rear == -1;
    }

    bool isFull() {
        return (rear + 1) % MAX_SIZE == front;
    }

    void enqueue(int value) {
        if (isFull()) {
            cout << "queue is full"<<endl;
            return;
        } 
        else if (isEmpty()) {
            front = rear = 0;
        } 
        else {
            rear = (rear + 1) % MAX_SIZE;
        }
        arr[rear] = value;
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "queue is empty"<<endl;
            return;
        } 
        else if (front == rear) {
            front = rear = -1;
        } 
        else {
            front = (front + 1) % MAX_SIZE;
        }
    }

    int peek() {
        if (isEmpty()) {
            cout << "Queue is empty. No elements to peek.\n";
            return -1;
        }
        return arr[front];
    }
};
int main() {
    Queue queue;

    queue.enqueue(5);
    queue.enqueue(10);
    queue.enqueue(15);

    cout << "Front element: " << queue.peek() << endl;

    queue.dequeue();
    cout << "Front element after dequeue: " << queue.peek() << endl;
}