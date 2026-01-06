#include <vector>

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i = 0;
        int n_size = nums.size();
        std::vector<int> new_nums;       

        while (i < n_size) {
            if (nums[i] != val) {
                new_nums.push_back(nums[i]);
            }
            i++;
        }

        int new_vec = new_nums.size();
        nums = new_nums;

        return new_vec;
    }
};