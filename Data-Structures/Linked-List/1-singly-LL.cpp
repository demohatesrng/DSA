#include <iostream>
using namespace std;
class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};
class linkedlist {
    Node* head;
    Node* tail;
public:
    linkedlist() {
        this->head = nullptr;
        this->tail = nullptr;
    }
    void insertathead(int data) {
        Node* temp = new Node(data);
        temp->next = head;
        head = temp;
        if (tail == nullptr) {
            tail = temp;
        }
    }
    void insertattail(int data) {
        Node* temp = new Node(data);
        if (tail == nullptr) {
            head = temp;
            tail = temp;
        } 
        else {
            tail->next = temp;
            tail = temp;
        }
    }
    void deleteatHead() {
        if (head == nullptr) {
            cout << "List is empty" << endl;
            return;
        }
        Node* temp = head;
        head = head->next;
        delete temp;
    }
    void deleteAtTail() {
        if (head == nullptr) {
            cout << "List is empty" << endl;
            return;
        }
        if (head->next == nullptr) {
            delete head;
            head = nullptr;
            tail = nullptr;
            return;
        }
        Node* temp = head;
        while (temp->next != tail) {
            temp = temp->next;
        }
        delete tail;
        tail = temp;
        tail->next = nullptr;
    }
    void print() {
        Node* cursor = head;
        while (cursor != nullptr) {
            cout << cursor->data << " ";
            cursor = cursor->next;
        }
        cout << endl;
    }
    bool search(int val) {
        Node* cursor = head;
        while (cursor != nullptr) {
            if (cursor->data == val) {
                return true;
            }
            cursor = cursor->next;
        }
        return false;
    }
    void reverse() {
    if (!head || !head->next) return;

    Node* prev = nullptr;
    Node* current = head;
    Node* nextNode;

    while (current != nullptr) {
        nextNode = current->next;
        current->next = prev;
        prev = current;
        current = nextNode;
    }
    head = prev;
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
    void concatenate(linkedlist& list2) {
        if (head == nullptr) {
            head = list2.head;
            return;
        }
        
        Node* current = head;
        
        while (current->next != nullptr) {
            current = current->next;
        }
        
        current->next = list2.head;
        list2.head = nullptr;
    }
};
int main() {
    linkedlist list1;

    list1.insertathead(5);
    list1.insertathead(3);
    list1.print();

    list1.insertattail(19);
    list1.print();

    list1.deleteatHead();
    list1.print();

    list1.deleteAtTail();
    list1.print();

    int searchVal = 5;
    if (list1.search(searchVal)) {
        cout << "Element " << searchVal << " is present." << endl;
    } 
    else {
        cout << "Element " << searchVal << " is not present." << endl;
    }
}