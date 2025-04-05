class Solution {
    private int totalXorSum;
    public int subsetXORSum(int[] nums) {
         dfs(nums, 0, 0);
        return totalXorSum;
    }
    private void dfs(int[] nums, int index, int currentXor) {
        totalXorSum += currentXor;
        for (int i = index; i < nums.length; i++) {
            currentXor ^= nums[i];
            dfs(nums, i + 1, currentXor);
            currentXor ^= nums[i];
        }
    }
}
    