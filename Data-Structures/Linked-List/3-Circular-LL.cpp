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

    void merge(CircularLinkedList& list2) {
        if (list2.head == nullptr) return;

        Node* temp = list2.head;
        do {
            insertBack(temp->data);
            temp = temp->next;
        } while (temp != list2.head);
    }

    void sort() {
        if (head == nullptr || head->next == head) return;

        Node* current = head;
        Node* index = nullptr;
        int temp;

        do {
            index = current->next;
            while (index != head) {
                if (current->data > index->data) {
                    temp = current->data;
                    current->data = index->data;
                    index->data = temp;
                }
                index = index->next;
            }
            current = current->next;
        } while (current != head);
    }

    void displayReverse() {
        if (head == nullptr) {
            cout << "List is empty." << endl;
            return;
        }

        Node* prev = nullptr;
        Node* current = head;
        Node* next;
        do {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        } while (current != head);

        Node* temp = prev;
        do {
            cout << temp->data << " ";
            temp = temp->next;
        } while (temp != prev);

        // Restore the original structure
        current = head;
        prev = nullptr;
        do {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        } while (current != head);
        head->next = prev;

        cout << endl;
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
