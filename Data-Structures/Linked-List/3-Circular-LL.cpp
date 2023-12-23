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
    do {
        cout << cursor->data << " -> ";
        cursor = cursor->next;
    } while (cursor != head);
    cout << endl;
}

    bool search(int value) {
    if (head == nullptr) {
        return false;
    }
    Node* cursor = head;
    do {
        if (cursor->data == value) {
            return true;
        }
        cursor = cursor->next;
    } while (cursor != head);
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

    bool isCircular(Node* head) {
    if (head == nullptr) return false;

    Node* slow = head;
    Node* fast = head;

    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast) {
            return true;
        }
    }
    return false;
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
    void printAlternateCircular(Node* head) {
    if (head == nullptr)
        return;
    Node* current = head->next;
    do{
        cout<<current->data << " ";
        if(current->next != head)
            current = current->next->next;
        else
            break;
        } 
    while (current != nullptr && current != head);
        cout<<endl;
    }
};
int main() {
    CircularLinkedList list1;
    list1.insertFront(5);
    list1.insertFront(3);
    list1.insertFront(7);

    CircularLinkedList list2;
    list2.insertFront(10);
    list2.insertFront(8);
    list2.insertFront(12);

    cout << "List 1: ";
    list1.display();
    cout << "List 2: ";
    list2.display();

    list1.merge(list2);
    cout << "Merged list: ";
    list1.display();

    cout << "Sorted list: ";
    list1.sort();
    list1.display();
}