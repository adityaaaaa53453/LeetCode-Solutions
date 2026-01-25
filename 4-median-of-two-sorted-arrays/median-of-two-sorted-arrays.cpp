class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        for(int i = 0; i < nums1.size(); i++){
            ans.push_back(nums1[i]);
        }
        for(int j = 0; j < nums2.size(); j++){
            ans.push_back(nums2[j]);
        }
        sort(ans.begin(), ans.end());

        int s = 0, e = ans.size() - 1;

        if(ans.size() % 2 != 0){
            int mid = s + (e - s) / 2;
            return ans[mid];
        }
        else{
            int m = s + (e - s) / 2;
            return (ans[m] + ans[m + 1]) / 2.0;  // ✅ FIX
        }
    }
};
