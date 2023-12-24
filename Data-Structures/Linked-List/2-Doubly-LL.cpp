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
        list2.head = list2.tail = nullptr;
    }
    void printalt() {
        Node* cursor = head;
        while (cursor != nullptr && cursor->next != nullptr) {
            cout << cursor->next->data << " ";
            cursor = cursor->next->next;
        }
        cout << endl;
    }
    void sortLinkedList() {
        if (head == nullptr || head == tail) {
            return;
        }
        for (Node* i = head; i != nullptr; i = i->next) {
            for (Node* j = head; j->next != nullptr; j = j->next) {
                if (j->data > j->next->data) {
                    swap(j->data, j->next->data);
                }
            }
        }
    }
};
int main(){
    DLL doublyLinkedList;
    doublyLinkedList.insertAtHead(1); 
    doublyLinkedList.printalt();
}