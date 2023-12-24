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
    }
    void insertattail(int data) {
        Node* temp = new Node(data);
            tail->next = temp;
            tail = temp;
    }
    void insertatPosition(int position, int data){
        if(position<1){
            insertathead(data);
            return;
        Node* temp = head;
        int cnt = 1;
        while(cnt < position-1){
            temp = temp->next;
            cnt++;
        }
        Node* toinsert = new Node(data);
        toinsert->next = temp->next;
        temp->next = toinsert;

        if(temp->next == NULL){
            insertattail(data);
            return;
            }
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
    void deleteatposition(int position){
        Node* cursor = head;
        Node* prev = nullptr;
        int cnt = 1;

        while(cnt< position){
            prev = cursor;
            cursor = cursor->next;
            cnt++;
        }
        prev->next = cursor->next;
        cursor->next = nullptr;
        delete cursor;
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
    void printalt() {
        Node* cursor = head;
        while (cursor != nullptr && cursor->next != nullptr) {
            cout << cursor->next->data << " ";
            cursor = cursor->next->next;
        }
        cout << endl;
    }
    void sortLinkedList(Node* head) {
    for (Node* i = head; i != nullptr; i = i->next) {
        for (Node* j = head; j->next != nullptr; j = j->next) {
            if (j->data > j->next->data) {
                    swap(j->data, j->next->data);
                }
            }
        }
    }
};
int main() {
    linkedlist list1;
    list1.insertattail(5);
}