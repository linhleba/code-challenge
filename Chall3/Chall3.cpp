class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int left = 0;
        int right = nums.size() - 1;
        while(left <= right)
        {
            int mid = left + (right - left)/2;
            if (mid == left && mid == right) 
                return mid;
            else if (mid == 0 && nums[mid] > nums[mid+1])
                return mid;
            else if (mid == right && nums[mid] > nums[mid-1])
                return mid;
            else if (nums[mid+1] < nums[mid] && nums[mid-1] < nums[mid])
                return mid;
            else
            {
                if(nums[mid+1] > nums[mid]) left = mid + 1;
                else right = mid - 1;
            }
            
        }
        return -1;
    }
};