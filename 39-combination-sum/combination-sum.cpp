class Solution {
public:
    void solve(vector<int>& arr, int idx, int tar,
               vector<vector<int>>& ans, vector<int>& comb) {

        if (tar == 0) {
            ans.push_back(comb);
            return;
        }

        if (idx == arr.size() || tar < 0) return;
        comb.push_back(arr[idx]);
        solve(arr, idx, tar - arr[idx], ans, comb);
        comb.pop_back();
        solve(arr, idx + 1, tar, ans, comb);
    }

    vector<vector<int>> combinationSum(vector<int>& arr, int tar) {
        vector<vector<int>> ans;
        vector<int> comb;
        solve(arr, 0, tar, ans, comb);
        return ans;
    }
};
