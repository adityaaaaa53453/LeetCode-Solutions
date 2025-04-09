class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
           std::sort(nums.rbegin(), nums.rend());  

        int operations = 0;
        int n = nums.size();

        if (k > *std::min_element(nums.begin(), nums.end())) return -1;

        for (int i = 0; i < n; i++) {
            if (nums[i] == k) break;  
            if (i == 0 || nums[i] != nums[i - 1]) { 
                operations++;  
            }
        }
        return operations;
    }
    
};