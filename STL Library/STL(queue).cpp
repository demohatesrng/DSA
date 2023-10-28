#include <iostream>
#include <queue>
using namespace std;
int main() {
    queue<int> q;

    // Push elements onto the queue
    q.push(1);
    q.push(2);
    q.push(3);

    // Access and print the front element
    cout << "Front element: " << q.front() << endl;

    // Access and print the back element
    cout << "Back element: " << q.back() << endl;

    // Pop the front element
    q.pop();

    // Check if the queue is empty
    if (q.empty()) {
        cout << "Queue is empty." <<endl;
    } else {
        cout << "Queue size: " << q.size() << endl;
    }

    return 0;
}