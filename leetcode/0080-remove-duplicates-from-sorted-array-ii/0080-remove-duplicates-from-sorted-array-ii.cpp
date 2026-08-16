class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() <= 2)
            return nums.size();
        int i = 2;

        for(int k = 2; k < nums.size(); k++) {
            if(nums[k] != nums[i - 2]) {
                nums[i] = nums[k];
                i++;
            }
        }

        return i;
    }
};