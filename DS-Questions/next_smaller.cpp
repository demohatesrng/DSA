#include <iostream>
#include <stack>
#include <vector>
using namespace std;
vector<int> next_greater(const vector<int>& arr) {
    int n = arr.size();
    stack<int> s;
    vector<int> ans(n);

    for (int i = n - 1; i >= 0; i--) {
        while (!s.empty() && s.top() <= arr[i]) {
            s.pop();
        }
        if (s.empty()) {
            ans[i] = -1;
        } else {
            ans[i] = s.top();
        }
        s.push(arr[i]);
    }
    return ans;
}
int main() {
    vector<int> input = {4, 5, 2, 10, 8};
    vector<int> result = next_greater(input);

    cout << "nearest greater elements to right  ";
    for (int val : result){
        cout << val << " ";
    }
    cout<<endl;
}