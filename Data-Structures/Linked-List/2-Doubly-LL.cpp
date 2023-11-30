#include <iostream>
using namespace std;
class Node{
    public:
        int data;
        Node* next;
        Node* prev;
    
    Node(int data){
        this->data = data;
        this->next = nullptr;
        this->prev = nullptr;
    }
};
class DLL{
    private:
        Node* head;
        Node* tail;
    public:
        DLL(){
            this->head = nullptr;
            this->tail = nullptr;
        }
    void displayForward(){
        Node*cursor = head;
        while(cursor!= nullptr){
            cout<<cursor->data<<" ";
            cursor = cursor->next;
        }
        cout<<"nullptr"<<endl;
    }
    void displayBack(){
        Node*cursor = tail;
        while(cursor!=nullptr){
            cout<<cursor->data<<" ";
            cursor = cursor->prev;
        }
        cout<<"nullptr"<<endl;
    }
    Node* search(int x){
        Node* cursor = head;
        while(cursor!= nullptr){
            if(cursor->data == x){
                return cursor;
            }
            cursor = cursor->next;
        }
        return nullptr;
    }
    void insertAtHead(int x){
        Node* newNode = new Node(x);
        newNode->next = head;
        newNode->prev = nullptr;

        if(head!=nullptr){
            head->prev = newNode;
        }
        head = newNode;
    }
    void insertAtPosition(int x, int position){
        if(position<=0){
            insertAtHead(x);
            return;
        }
        Node* newNode = new Node(x);

        Node* cursor = head;
        int cursorposition = 0;

        while(cursor!= nullptr && cursorposition < position-1){
            cursor = cursor->next;
            cursorposition++;
        }
        if(cursor == nullptr){
            cout<<"Invalid position"<<endl;
            return;
        }
        newNode->next = cursor->next;
        newNode->prev = cursor;
        cursor->next = newNode;

        if(newNode->next != nullptr){
            newNode->next->prev = newNode;
        }
        else{
            tail = newNode;
        }
    }
    void insertAtEnd(int x) {
    Node* newNode = new Node(x);
    newNode->prev = tail;
    newNode->next = nullptr;

    if (tail != nullptr) {
        tail->next = newNode;
    }
    tail = newNode;
}
    void removeFromHead(){
        if(head == nullptr){
            cout<<"list is empty"<<endl;
            return;
        }
        Node* temp = head;
        head = head->next;

        if(head!= nullptr){
            head->prev = nullptr;
        }
        delete temp;
    }
    void removeFromTail() {
    if (tail == nullptr) {
        cout << "No more elements" << endl;
        return;
    }
    Node* temp = tail;
    tail = tail->prev;

    if (tail != nullptr) {
        tail->next = nullptr;
    }
    delete temp;
    }
};
int main(){
    DLL doublyLinkedList;

    doublyLinkedList.insertAtHead(1);
    doublyLinkedList.insertAtEnd(3);
    doublyLinkedList.insertAtPosition(2, 2);

    doublyLinkedList.displayForward(); // Should print "1 2 3 nullptr"
    doublyLinkedList.displayBack();    // Should print "3 2 1 nullptr"

    doublyLinkedList.displayForward(); // Should print "1 3 nullptr"
    doublyLinkedList.displayBack();    // Should print "3 1 nullptr"

    return 0;
}