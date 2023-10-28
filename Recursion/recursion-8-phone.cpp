class Solution {
private:
    void solve(const string& digits, int index, string& output, vector<string>& ans, const string mapping[]) {
        // Base case
        if (index >= digits.length()) {
            ans.push_back(output);
            return;
        }
        int number = digits[index] - '0';
        string value = mapping[number];

        for (int i = 0; i < value.length(); i++) {
            output.push_back(value[i]);
            solve(digits, index + 1, output, ans, mapping);
            output.pop_back();
        }
    }
public:
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        int index = 0;
        string output;
        string mapping[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        if (digits.empty()) {
            return ans;
        }
        solve(digits, index, output, ans, mapping);
        return ans;
    }
};