#include <iostream>
using namespace std;
class node {
public:
    int data;
    node* left;
    node* right;

    node(int data) {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};
node* insertbst(node* root, int data) {
    if (root == NULL) {
        root = new node(data);
        return root;
    }
    if (data > root->data) {
        root->right = insertbst(root->right, data);
    } 
    else {
        root->left = insertbst(root->left, data);
    }
    return root;
}
void takeinput(node* &root) {
    int data;
    cin >> data;

    while (data != -1) {
        root = insertbst(root, data);
        cin >> data; // Update data for next iteration
    }
}
node* searchbst(node* root, int x) {
    while (root != NULL) {
        if (root->data == x) {
            return root; // Node with value x found
        }
        if (root->data > x) {
            root = root->left; // Move to the left subtree
        } 
        else {
            root = root->right; // Move to the right subtree
        }
    }
    return nullptr; // Node with value x not found
}
void inorder(node* root) {
    if (root == NULL) {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
void preorder(node* root) {
    if (root == NULL) {
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(node* root) {
    if (root == NULL) {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}
node* minval(node* root){
    node* temp = root;
    while(temp->left != NULL){
        temp = temp->left;
    }
    return temp;
}
node* maxval(node* root){
    node* temp = root;
    while(temp->right != NULL){
        temp = temp->right;
    }
    return temp;
}
node* deletefrombst(node* root, int val) {
    if (root == NULL) {
        return root;
    }
    if (val < root->data) {
        root->left = deletefrombst(root->left, val);
    } 
    else if (val > root->data) {
        root->right = deletefrombst(root->right, val);
    } 
    else {
        if (root->left == NULL) {
            node* temp = root->right;
            delete root;
            return temp;
        } 
        else if (root->right == NULL) {
            node* temp = root->left;
            delete root;
            return temp;
        }
        node* temp = minval(root->right);
        root->data = temp->data;
        root->right = deletefrombst(root->right, temp->data);
    }
    return root;
}
int main() {
    node* root = nullptr;
    cout << "Enter data for the binary search tree (-1 to stop):" << endl;
    takeinput(root);

    cout << "\nInorder Traversal:" << endl;
    inorder(root);

    cout << "\nEnter a value to search in the BST: ";
    int searchValue;
    cin >> searchValue;
    node* searchResult = searchbst(root, searchValue);
    if (searchResult != nullptr) {
        cout << "Value " << searchValue << " found in the BST!" << endl;
    } 
    else {
        cout << "Value " << searchValue << " not found in the BST." << endl;
    }

    cout << "\nEnter a value to delete from the BST: ";
    int deleteValue;
    cin >> deleteValue;
    root = deletefrombst(root, deleteValue);

    cout << "\nInorder Traversal after deletion:" << endl;
    inorder(root);
}