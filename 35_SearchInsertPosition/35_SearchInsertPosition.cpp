class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int len = nums.size();
        
        if (target > nums[len-1]){
            return len;
        }
        if (target < nums[0]){
            return 0;
        }
        if (nums[0] == target){
            return 0;
        }
        
        for (int i = 1; i < len; i++){
            if (nums[i] == target){
                return i;
            }
            if (nums[i-1] < target && nums[i] > target){
                return i;
            }
        
        }  
        return -1;
    }
};