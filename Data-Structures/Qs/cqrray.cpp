#include <iostream>
using namespace std;
const int MAX_SIZE = 5;
class CircularQueue {
private:
    int arr[MAX_SIZE];
    int front, rear;

public:
    CircularQueue() {
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
            cout << "queue is full. Cannot enqueue more elements"<<endl;
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
            cout << "Queue is empty"<<endl;
            return;
        } else if (front == rear) {
            front = rear = -1;
        } else {
            front = (front + 1) % MAX_SIZE;
        }
    }

    int peek() {
        if (isEmpty()) {
            cout << "queue is empty"<<endl;;
            return -1;
        }
        return arr[front];
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