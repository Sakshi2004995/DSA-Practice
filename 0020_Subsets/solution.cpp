class Solution {
public:
    vector<vector<int>> ans;
    vector<int> path;

    void backtrack(vector<int>& nums, int index) {

        if (index == nums.size()) {
            ans.push_back(path);
            return;
        }

        // Take
        path.push_back(nums[index]);
        backtrack(nums, index + 1);

        // Backtrack
        path.pop_back();

        // Not Take
        backtrack(nums, index + 1);
    }

    vector<vector<int>> subsets(vector<int>& nums) {

        backtrack(nums, 0);

        return ans;
    }
};