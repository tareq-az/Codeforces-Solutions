class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k=1;
        int n=nums.size();
        int i=0;
        while(k<n){
            if(nums[i]!=nums[k]){
                i++;
                nums[i]=nums[k];
            }
            k++;
        }
        return i+1;
    }
};