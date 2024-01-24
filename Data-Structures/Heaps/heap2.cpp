//Kth smallest element
#include <iostream>
#include <queue>
using namespace std;
int k_smallest(int arr[], int l, int r, int k){
    priority_queue <int> maxheap;
    for (int i = 0; i < k; i++){
        maxheap.push(arr[i]);
    }
    for (int i = k; i <= r; i++){
        if(arr[i]< maxheap.top()){
            maxheap.pop();
            maxheap.push(arr[i]);
        }
    }
    int ans = maxheap.top();
    return ans;
}

//Is Binary-Tree Heap
int countNodes(Node* root){
    if(root==NULL){
        return;
    }
    int ans = 1+(root->left)+(root->right);
    return ans;
}
bool isCBT(Node* root, int index, int cnt){
    if(root)==NULL;
        return NULL;

    if(index>=cnt)
        return false;
    
    else{
        bool left = isCBT(root->left, 2*index+1, cnt);
        bool rught = isCBT(root->right, 2*index+2, cnt);
        return (left && right);
    }
}
bool isMaxOrderHeap(Node* root){
    if(root->left && root->right == NULL)
        return true;

    if(root->right == NULL){
        return (root->data > root->left->data);
    }
    else{
        bool left = isMaxOrderHeap(root->left);
        bool right = isMaxOrderHeap(root->right);

        if(left && right && (root->data > root->right->data) && root->data > root->left->data);
        return true;
    }
}
bool isHeap(Node* root){
    int index = 0;
    int totalCount = countNodes(root);
    if(isCBT(root, index, totalCount)&& isMaxOrderHeap(root)){
        return true;
    }
    else{
        return false;
    }
}

//Merge 2 binary maxheap
void maxHeapify(int arr[], int N, int idx){
    // Find largest of node and its children
    if (idx >= N)
        return;
 
    int l = 2 * idx + 1;
    int r = 2 * idx + 2;
    int max = idx;
    if (l < N && arr[l] > arr[idx])
        max = l;
    if (r < N && arr[r] > arr[max])
        max = r;
    if (max != idx) {
        swap(arr[max], arr[idx]);
        maxHeapify(arr, N, max);
    }
}
void buildMaxHeap(int arr[], int N){
    for (int i = N / 2 - 1; i >= 0; i--)
        maxHeapify(arr, N, i);
}
void mergeHeaps(int merged[], int a[], int b[], int N,int M){
    for (int i = 0; i < N; i++)
        merged[i] = a[i];
    for (int i = 0; i < M; i++)
        merged[N + i] = b[i];
    buildMaxHeap(merged, N + M);
}
 