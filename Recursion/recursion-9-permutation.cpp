class Solution {
private:
    void solve(int index, vector<int> nums, vector<vector<int>>& ans) {
        // Base case
        if (index == nums.size() - 1) {
            ans.push_back(nums);
            return;
        }
        for (int j = index; j < nums.size(); j++) {
            swap(nums[index], nums[j]);
            solve(index + 1, nums, ans);
            swap(nums[index], nums[j]);
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        int index = 0;
        solve(index, nums, ans);
        return ans;
    }
};