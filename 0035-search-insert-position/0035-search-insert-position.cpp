class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int beg = 0, end = n -1 ,mid;
        while(beg <= end)
        {
            mid = beg + (end - beg)/2;

            if(target == nums[mid])
            return mid;
            else if(nums[mid] < target)
            beg = mid + 1;
            else
            end = mid - 1;

        }
    return beg;

    }
};