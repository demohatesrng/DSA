#include <iostream>
using namespace std;
class Node {
public:
    int data;
    Node* left;
    Node* right;
    int height;

    Node(int data) {
        this->data = data;
        this->left = nullptr;
        this->right = nullptr;
        this->height = 1;
    }
};
int max(int a, int b) {
    if(a>b)
        return a;
    else{
        return b;
    }
}
int height(Node* root) {
    if (root == nullptr) 
        return 0;
    return root->height;
}
int getBalance(Node* root) {
    if (root == nullptr) 
        return 0;
    return height(root->left) - height(root->right);
}
Node* rightRotate(Node* y) {
    Node* x = y->left;
    Node* T2 = x->right;

    x->right = y;
    y->left = T2;

    y->height = max(height(y->left), height(y->right)) + 1;
    x->height = max(height(x->left), height(x->right)) + 1;

    return x;
}
Node* leftRotate(Node* x) {
    Node* y = x->right;
    Node* T2 = y->left;

    y->left = x;
    x->right = T2;

    x->height = max(height(x->left), height(x->right)) + 1;
    y->height = max(height(y->left), height(y->right)) + 1;

    return y;
}
Node* insert(Node* root, int data) {
    if (root == nullptr) return new Node(data);

    if (data < root->data)
        root->left = insert(root->left, data);
    else if (data > root->data)
        root->right = insert(root->right, data);
    else
        return root; // Duplicate keys not allowed

    root->height = 1 + max(height(root->left), height(root->right));

    int balance = getBalance(root);

    if (balance > 1 && data < root->left->data)
        return rightRotate(root);

    if (balance < -1 && data > root->right->data)
        return leftRotate(root);

    if (balance > 1 && data > root->left->data) {
        root->left = leftRotate(root->left);
        return rightRotate(root);
    }

    if (balance < -1 && data < root->right->data) {
        root->right = rightRotate(root->right);
        return leftRotate(root);
    }

    return root;
}
Node* minValueNode(Node* root) {
    Node* temp = root;
    while (temp->left != nullptr)
        temp = temp->left;
    return temp;
}
Node* deleteNode(Node* root, int data) {
    if (root == nullptr) return root;

    if (data < root->data)
        root->left = deleteNode(root->left, data);
    else if (data > root->data)
        root->right = deleteNode(root->right, data);
    else {
        if (root->left == nullptr || root->right == nullptr) {
            Node* temp = root->left ? root->left : root->right;
            if (temp == nullptr) {
                temp = root;
                root = nullptr;
            } 
            else {
                *root = *temp;
            }
            delete temp;
        } else {
            Node* temp = minValueNode(root->right);
            root->data = temp->data;
            root->right = deleteNode(root->right, temp->data);
        }
    }

    if (root == nullptr) return root;

    root->height = 1 + max(height(root->left), height(root->right));

    int balance = getBalance(root);

    if (balance > 1 && getBalance(root->left) >= 0)
        return rightRotate(root);

    if (balance > 1 && getBalance(root->left) < 0) {
        root->left = leftRotate(root->left);
        return rightRotate(root);
    }

    if (balance < -1 && getBalance(root->right) <= 0)
        return leftRotate(root);

    if (balance < -1 && getBalance(root->right) > 0) {
        root->right = rightRotate(root->right);
        return leftRotate(root);
    }

    return root;
}
void inorder(Node* root) {
    if (root == NULL) {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
void preorder(Node* root) {
    if (root == NULL) {
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(Node* root) {
    if (root == NULL) {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}
Node* searchbst(Node* root, int x) {
    while (root != NULL) {
        if (root->data == x) {
            return root;
        }
        if (root->data > x) {
            root = root->left; 
        } 
        else {
            root = root->right; 
        }
    }
    return nullptr; 
}
int main() {
    Node* root = nullptr;

    root = insert(root, 10);
    root = insert(root, 20);
    root = insert(root, 30);
    root = insert(root, 40);
    root = insert(root, 50);
    root = insert(root, 25);

    cout << "Inorder traversal of the AVL tree is: ";
    inorder(root);
    cout << endl;

    root = deleteNode(root, 30);

    cout << "Inorder traversal after deletion of 30: ";
    inorder(root);
    cout << endl;

    int searchData = 30;
    Node* result = searchbst(root, searchData);
    if (result != nullptr)
        cout << "Found " << searchData << " in the AVL tree!" << endl;
    else
        cout << searchData << " not found in the AVL tree!" << endl;
}