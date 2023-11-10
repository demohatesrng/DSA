#include <iostream>
using namespace std;
class Node {
public:
    int data;
    Node* next;

    Node(int data){
        this-> data = data;
        this->next = nullptr;
    }
};
class CircularLinkedList {
private:
    Node* head;
public:
    CircularLinkedList(){
        this->head = nullptr;
    }

    void display() {
        if (head == nullptr) {
            cout << "List is empty." << endl;
            return;
        }
        Node* cursor = head;
            cout << cursor->data << " -> ";
            cursor = cursor->next;
    }

    bool search(int value) {
        if (head == nullptr) {
            return false;
        }
        Node* cursor = head;
            if (cursor->data == value) {
                return true;
            }
            cursor = cursor->next;
        return false;
    }

    void insertFront(int value) {
        Node* newNode = new Node(value);

        if (head == nullptr) {
            newNode->next = newNode;
            head = newNode;
        } 
        else {
            newNode->next = head;
            Node* tail = head;
            while (tail->next != head) {
                tail = tail->next;
            }
            tail->next = newNode;
            head = newNode;
        }
    }

    void insertBack(int value) {
        Node* newNode = new Node(value);

        if (head == nullptr) {
            newNode->next = newNode;
            head = newNode;
        } else {
            newNode->next = head;
            Node* tail = head;
            while (tail->next != head) {
                tail = tail->next;
            }
            tail->next = newNode;
        }
    }

    void removeFront() {
        if (head == nullptr) {
            cout << "List is empty. Nothing to remove." << endl;
            return;
        }

        if (head->next == head) {
            delete head;
            head = nullptr;
        } else {
            Node* tail = head;
            while (tail->next != head) {
                tail = tail->next;
            }
            Node* temp = head;
            head = head->next;
            tail->next = head;
            delete temp;
        }
    }

    void removeBack() {
        if (head == nullptr) {
            cout << "List is empty. Nothing to remove." << endl;
            return;
        }

        if (head->next == head) {
            delete head;
            head = nullptr;
        } else {
            Node* tail = head;
            Node* previous = nullptr;
            while (tail->next != head) {
                previous = tail;
                tail = tail->next;
            }
            previous->next = head;
            delete tail;
        }
    }
};
int main() {
    CircularLinkedList cll;

    cll.insertFront(1);
    cll.insertFront(2);
    cll.insertFront(3);
    cll.insertFront(4);
    cll.insertFront(5);
    cll.insertBack(6);
    cll.display();

    return 0;
}