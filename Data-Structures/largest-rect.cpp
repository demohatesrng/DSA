// LARGEST RECTANGULAR AREA IN A HISTOGRAM
#include <iostream>
#include <vector>
#include <stack>
using namespace std;
class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int ans = 0;
        stack<int> stack;

        heights.push_back(0);
        for (int i = 0; i < heights.size(); ++i) {
            while (!stack.empty() && heights[i] < heights[stack.top()]) {
                int h = heights[stack.top()];
                stack.pop();
                int w = stack.empty() ? i : i - stack.top() - 1;
                ans = max(ans, h * w);
            }
            stack.push(i);
        }
        return ans;
    }
};