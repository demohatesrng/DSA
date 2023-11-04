#include <iostream>
using namespace std;
class Queue {
    private:
        int *array;
        int front;
        int rear;
        int capacity;
        int size;
public:
    Queue(int capacity) {
        this->capacity = capacity;
        this->array = new int[capacity];
        this->front = 0;
        this->rear = -1;
        this->size = 0;
    }
    ~Queue() {
        delete[] array;
    }
    bool isEmpty() {
        return size == 0;
    }
    bool isFull() {
        return size == capacity;
    }
    void enqueue(int item) {
        if (isFull()) {
            cout << "Queue is full. Cannot enqueue " << item << endl;
            return;
        }
        rear = (rear + 1) % capacity;
        array[rear] = item;
        size++;
    }
    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty. Cannot dequeue." << endl;
            return;
        }
        front = (front + 1) % capacity;
        size--;
    }
    int peek() {
        if (isEmpty()) {
            cerr << "Queue is empty. Cannot peek." << endl;
            return -1; // Return a default value
        }
        return array[front];
    }
};
int main() {
    Queue queue(5); // Create a queue with a capacity of 5

    queue.enqueue(1);
    queue.enqueue(2);
    queue.enqueue(3);

    cout << "Front element: " << queue.peek() << endl;

    queue.dequeue();
    cout << "Front element after dequeue: " << queue.peek() << endl;

    return 0;
}
