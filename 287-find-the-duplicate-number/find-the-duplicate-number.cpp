class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int low = 1;
        int high = nums.size() - 1;
        int duplicate = -1;

        while (low <= high) {
            int mid = (low + high) / 2;
            int count = 0;

            // Count how many numbers ≤ mid
            for (int num : nums) {
                if (num <= mid)
                    count++;
            }

            if (count > mid) {
                duplicate = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return duplicate;
    }
};
