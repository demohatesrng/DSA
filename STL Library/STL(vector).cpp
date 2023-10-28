#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;
    vector<int> w(5,1); // 5 element and starting with 1

    // Push an element into the vector
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    // Print the size of the vector
    cout << "size: " << v.size() << endl; //total element present
    cout<<"capacity"<<v.capacity()<<endl; //element space

    cout<<v.at(2);
    cout<<v.front();
    cout<<v.back();
    v.pop_back();
    v.clear();

    return 0;
}
