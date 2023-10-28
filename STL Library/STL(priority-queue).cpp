#include <iostream>
#include <queue>
using namespace std;
int main() {
    priority_queue<int> pq;

    // Push elements onto the priority queue
    pq.push(3);
    pq.push(1);
    pq.push(4);
    pq.push(2);

    // Access and print the top element (highest priority)
    cout << "Top element: " << pq.top() << endl;

    // Pop the top element
    pq.pop();

    // Check if the priority queue is empty
    if (pq.empty()) {
        cout << "Priority queue is empty." << endl;
    } else {
        cout << "Priority queue size: " << pq.size() << endl;
    }

    return 0;
}
