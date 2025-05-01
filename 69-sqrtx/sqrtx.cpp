class Solution {
public:
long long int binarysearch(int n){
    int s = 0;
    int e = n;
    long long int mid = s + (e - s)/2;
    long long int ans = -1;
    while(s <= e){
       long long int square = mid * mid;
        if(square == n){
            return mid;
        }
        if(square < n){
            ans = mid;
            s = mid + 1;
        }
        else{
            e = mid - 1;

        }
        mid = s + (e - s)/2;
     }
     return ans;
    }
    int mySqrt(int x) {
        //  int l = 0, r = x;
        // while (l < r) {
        //     int mid = (l + r + 1ll) >> 1;
        //     if (mid > x / mid) {
        //         r = mid - 1;
        //     } else {
        //         l = mid;
        //     }
        // }
        // return l;
        return binarysearch(x);
    }
};