#include <iostream>
using namespace std;
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int data) {
        this->data = data;
        this->left = nullptr;
        this->right = nullptr;
    }
};
Node* buildtree() {
    cout << "Enter data for node: ";
    int data;
    cin >> data;

    if (data == -1) {
        return nullptr;
    }

    Node* root = new Node(data);

    cout << "Enter data to be inserted in the left of " << data << ": ";
    root->left = buildtree();
    cout << "Enter data to be inserted in the right of " << data << ": ";
    root->right = buildtree();

    return root;
}
int main() {
    Node* root = buildtree();
    return 0;
}
