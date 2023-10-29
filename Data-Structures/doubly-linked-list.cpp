#include <iostream>
using namespace std;
class Node{
    public:
        int data;
        Node* prev;
        Node* next;

    Node(int value){
        this -> data = data;
        this -> next = nullptr;
        this -> prev = nullptr;
    }
};
class DoublyLinkedList{
    private:
        Node* head;
        Node* tail;
    public:
        DoublyLinkedList(){
            this -> head = nullptr;
            this -> tail = nullptr;
        }
    void insertAtBeginning(int x){
        Node* newNode = new Node(x);
        newNode -> next = head;
        newNode -> prev  = nullptr;

        if(head!= nullptr){
            head->prev = newNode;
        }
        else{
            tail = newNode;
        }
        head = newNode;
    }
    Node* search(int x){
        Node* cursor = head;
        while(cursor!=nullptr){
            if(cursor->data == x){
                return cursor;
            }
            cursor = cursor-> next;
        }
        return nullptr;
    }
    void displayFroward(){
        Node* cursor = head;
        while(cursor!= nullptr){
            cout<< cursor->data<<"->";
            cursor = cursor->next;
        }
        cout<<"nullptr"<<endl;
    }
    void displayBackward(){
        Node* cursor = tail;
        while(cursor!= nullptr){
            cout<< cursor->data<<"->";
            cursor = cursor->prev;
        }
        cout<<"nullptr"<<endl;
    }
    void concatenate(DoublyLinkedList& otherList){
        if(head==nullptr){
            head = otherList.head;
        }
        else if(otherList.head != nullptr){
            tail->next = otherList.head;
            otherList.head->prev = tail;
            tail = otherList.tail;
        }
        otherList.head = nullptr;
        otherList.tail = nullptr;
    }
};
int main(){
    return 0;
}