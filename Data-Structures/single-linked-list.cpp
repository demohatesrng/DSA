#include <iostream>
using namespace std;
class Node {
public:
    int data;
    Node* next;
    
    Node(int value){
        this -> data = value;
        this-> next = NULL;
    }
};
class SinglyLinkedList {
private:
    Node* head;
public:
    SinglyLinkedList(){
        this->head = nullptr;
    }

    void insertAtBeginning(int x) {
        Node* newNode = new Node(x);
        newNode->next = head;
        head = newNode;
    }
    void insertAtPosition(int x, int position) {
        if (position <= 0) {
            insertAtBeginning(x);
            return;
        }

        Node* newNode = new Node(x);
        newNode->next = nullptr;

        Node* cursor = head;
        int cursorPosition = 0;

        while (cursor != nullptr && cursorPosition < position - 1) {
            cursor = cursor->next;
            cursorPosition++;
        }

        if (cursor == nullptr) {
            cout << "Invalid position." << endl;
            return;
        }

        newNode->next = cursor->next;
        cursor->next = newNode;
    }
    void removeFromBeginning() {
        if (head == nullptr) {
            cout << "List is empty" << endl;
            return;
        }

        Node* temp = head;
        head = head->next;
        delete temp;
    }

    Node* search(int x) {
        Node* cursor = head;
        while (cursor != nullptr) {
            if (cursor->data == x) {
                return cursor;
            }
            cursor = cursor->next;
        }
        return nullptr;
    }
    void concatenate(SinglyLinkedList& otherList) {
        if (head == nullptr) {
            head = otherList.head;
        } 
        else {
            Node* cursor = head;
            while (cursor->next != nullptr) {
                cursor = cursor->next;
            }
            cursor->next = otherList.head;
        }
        otherList.head = nullptr;
    }
    void display() {
        Node* cursor = head;
        while (cursor != nullptr) {
            cout << cursor->data << " -> ";
            cursor = cursor->next;
        }
        cout << "nullptr" << endl;
    }
};
int main() {
    SinglyLinkedList list1;
    list1.insertAtBeginning(3);
    list1.insertAtBeginning(2);
    list1.insertAtBeginning(1);
    list1.display(); 

    list1.insertAtPosition(4, 2);
    list1.display(); 

    list1.removeFromBeginning();
    list1.display(); 

    SinglyLinkedList list2;
    list2.insertAtBeginning(7);
    list2.insertAtBeginning(6);
    list2.insertAtBeginning(5);

    list1.concatenate(list2);
    list1.display(); 

    Node* searchResult = list1.search(6);
    if (searchResult != nullptr) {
        cout << "Element 6 found at address: " << searchResult << endl;
    } else {
        cout << "Element 6 not found." << endl;
    }
    return 0;
}