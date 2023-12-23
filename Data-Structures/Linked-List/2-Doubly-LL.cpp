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
    void concatenate(DLL& list2) {
        if (head == nullptr) {
            head = list2.head;
            tail = list2.tail;
            return;
        }
        
        if (list2.head != nullptr) {
            tail->next = list2.head;
            list2.head->prev = tail;
            tail = list2.tail;
        }
        
        list2.head = list2.tail = nullptr; // Prevents list2 from being destructed with its elements
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
};
int main(){
    DLL doublyLinkedList;

    doublyLinkedList.insertAtHead(1);
    doublyLinkedList.insertAtEnd(3);

    doublyLinkedList.displayForward(); // Should print "1 2 3 nullptr"
    doublyLinkedList.displayBack();    // Should print "3 2 1 nullptr"

    doublyLinkedList.displayForward(); // Should print "1 3 nullptr"
    doublyLinkedList.displayBack();    // Should print "3 1 nullptr"
}