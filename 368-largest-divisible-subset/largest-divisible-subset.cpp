class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        int n = nums.size(); 
        if (n == 0) return {};  // Edge case: Empty input

        // Sort numbers to ensure divisibility order
        sort(nums.begin(), nums.end());

        // `subsetSizes` stores max subset length ending at index `i`
        vector<int> subsetSizes(n, 1), prevIndex(n, -1);
        int maxSubsetIndex = 0, maxSize = 1;

        // Compute subset sizes
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < i; ++j) {
                if (nums[i] % nums[j] == 0 && subsetSizes[i] < subsetSizes[j] + 1) {
                    subsetSizes[i] = subsetSizes[j] + 1;
                    prevIndex[i] = j;
                }
            }
            if (subsetSizes[i] > maxSize) {
                maxSize = subsetSizes[i];
                maxSubsetIndex = i;
            }
        }

        // Reconstruct the subset
        vector<int> largestSubset;
        while (maxSubsetIndex != -1) {
            largestSubset.push_back(nums[maxSubsetIndex]);
            maxSubsetIndex = prevIndex[maxSubsetIndex];
        }

        reverse(largestSubset.begin(), largestSubset.end());
        return largestSubset;
    }
};