class Solution {
public:
    int missingNumber(vector<int>&a) {
       int n=a.size();
       int sum=0;
       for(int i=0;i<n;i++){
        sum=sum+a[i];
       }
       int actualsum=n*(n+1)/2;
       int totalsum=actualsum-sum;
       return totalsum;
    }
};