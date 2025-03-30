//binary search most common patterns
// we can use binary search to find the position of a target value in a sorted array
// the time complexity is O(log n)

//compressing the search space

//left  = mid +1
//right = mid-1

class Solution {
    public:
        int search(vector<int>& nums, int target) {
            int left = 0;
            int right = nums.size()-1;
    
            while(left <= right){
                int mid = (left+right)/2;
                if(target == nums[mid]) return mid;
                if(target < nums[mid] ) right = mid-1;
                else left = mid+1;
            }
            return -1;
        }
    };