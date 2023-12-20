#include <iostream>
using namespace std;
const int MAX_SIZE = 100;
class Deque {
private:
    int arr[MAX_SIZE];
    int front, rear;
    int size;
public:
    Deque() {
        front = -1;
        rear = 0;
        size = 0;
    }

    bool isEmpty() {
        return size == 0;
    }

    bool isFull() {
        return size == MAX_SIZE;
    }

    void insertFront(int value) {
        if (isFull()) {
           cout << "deque is full";
            return;
        } 
        else if (front == -1) {
            front = rear = 0;
        } 
        else if (front == 0) {
            front = MAX_SIZE - 1;
        } 
        else {
            front--;
        }
        arr[front] = value;
        size++;
    }

    void insertRear(int value) {
        if (isFull()) {
           cout << "deque is full";
            return;
        } 
        else if (front == -1) {
            front = rear = 0;
        } 
        else if (rear == MAX_SIZE - 1) {
            rear = 0;
        } 
        else {
            rear++;
        }
        arr[rear] = value;
        size++;
    }

    void deleteFront() {
        if (isEmpty()) {
           cout << "seque is empty";
            return;
        } 
        else if (front == rear) {
            front = rear = -1;
        } 
        else if (front == MAX_SIZE - 1) {
            front = 0;
        } 
        else {
            front++;
        }
        size--;
    }

    void deleteRear() {
        if (isEmpty()) {
           cout << "deque is empty";
            return;
        } 
        else if (front == rear) {
            front = rear = -1;
        } 
        else if (rear == 0) {
            rear = MAX_SIZE - 1;
        } 
        else {
            rear--;
        }
        size--;
    }

    int getFront() {
        if (isEmpty()) {
           cout << "deque is empty";
            return -1;
        }
        return arr[front];
    }

    int getRear() {
        if (isEmpty()) {
           cout << "deque is empty";
            return -1;
        }
        return arr[rear];
    }
};
int main() {
    Deque deque;

    deque.insertFront(5);
    deque.insertRear(10);
    deque.insertFront(15);

   cout << "Front element: " << deque.getFront() <<endl;
   cout << "Rear element: " << deque.getRear() <<endl;

    deque.deleteFront();
   cout << "Front element after deletion: " << deque.getFront() <<endl;

    deque.deleteRear();
   cout << "Rear element after deletion: " << deque.getRear() <<endl;

}