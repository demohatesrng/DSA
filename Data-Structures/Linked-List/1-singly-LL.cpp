#include <iostream>
using namespace std;
class Node {
public:
    int data;
    Node* next;
    Node* prev;

    Node(int data) {
        this->data = data;
        this->next = nullptr;
        this->prev = nullptr;
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
    void insertAtPosition(int position, int data) {
        if (position <= 0) {
            insertathead(data);
            return;
        }
        Node* temp = head;
        int cnt = 1;
        while (cnt < position - 1 && temp != nullptr) {
            temp = temp->next;
            cnt++;
        }
        if (temp == nullptr) {
            cout << "Position out of bounds" << endl;
            return;
        }
        Node* nodetoinsert = new Node(data);
        nodetoinsert->next = temp->next;
        temp->next = nodetoinsert;

        if (nodetoinsert->next == nullptr) {
            tail = nodetoinsert;
        }
    }
    void insertattail(int data) {
        Node* temp = new Node(data);
        if (tail == nullptr) {
            head = temp;
            tail = temp;
        } else {
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
    void deleteAtPosition(int position) {
        if (head == nullptr) {
            cout << "List is empty" << endl;
            return;
        }
        if (position <= 0) {
            cout << "Invalid position" << endl;
            return;
        }
        Node* temp = head;
        if (position == 1) {
            head = head->next;
            delete temp;
        } 
        else {
            Node* prev = nullptr;
            for (int i = 1; i < position && temp != nullptr; ++i) {
                prev = temp;
                temp = temp->next;
            }
            if (temp == nullptr) {
                cout << "Position out of bounds" << endl;
                return;
            }
            prev->next = temp->next;
            if (temp == tail) {
                tail = prev;
            }
            delete temp;
        }
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
};
int main() {
    linkedlist list1;

    list1.insertathead(5);
    list1.insertathead(3);
    list1.print();

    list1.insertAtPosition(2, 4);
    list1.print();

    list1.insertattail(19);
    list1.print();

    list1.deleteatHead();
    list1.print();

    list1.deleteAtTail();
    list1.print();

    list1.deleteAtPosition(2);
    list1.print();

    int searchVal = 5;
    if (list1.search(searchVal)) {
        cout << "Element " << searchVal << " is present." << endl;
    } 
    else {
        cout << "Element " << searchVal << " is not present." << endl;
    }
}