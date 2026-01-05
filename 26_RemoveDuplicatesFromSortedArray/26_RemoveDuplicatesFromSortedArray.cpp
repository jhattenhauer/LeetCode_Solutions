#include <algorithm>
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int prev = nums[0];
        int length = nums.size();
        int removed = 0;
        for (int i = 1; i < length; i++){
            if (nums[i] == prev){
                nums[i] = 999;
                removed++;
            } else {
                prev = nums[i];
            }
        } 
        std::sort(nums.begin(), nums.end());

        return nums.size() - removed;
    }
};