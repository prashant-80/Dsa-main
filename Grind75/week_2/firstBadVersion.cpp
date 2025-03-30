//approach
// Use binary search to efficiently find the first bad version

// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int left = 1;
        int right = n;
        
        while (left < right) {
            int mid = left + (right - left) / 2;
            if (isBadVersion(mid)) {
                right = mid;  //why not mid-1? because we want to find the first bad version so we need to check mid as well
            } else {
                left = mid + 1;
            }
        }
        
        return left;
    }
};
