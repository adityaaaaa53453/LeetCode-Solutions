class Solution {
public:
    int findDuplicate(vector<int>& nums) {
    //     int low = 1;
    //     int high = nums.size() - 1;
    //     int duplicate = -1;

    //     while (low <= high) {
    //         int mid = (low + high) / 2;
    //         int count = 0;
    //         for (int i = 0; i < nums.size(); i++) {
    //             int num = nums[i];  
    //             if (num <= mid)
    //                 count++;
    //         }

    //         if (count > mid) {
    //             duplicate = mid;
    //             high = mid - 1;
    //         } else {
    //             low = mid + 1;
    //         }
    //     }

    //     return duplicate;
    // }
    sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(nums[i]==nums[i+1]){
                return nums[i];
            }
        }
         return -1;
    }
};
