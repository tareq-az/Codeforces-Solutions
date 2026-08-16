class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        bool non_zero=true;
        int total=0;
        for(auto x:nums){
            total^=x;
            if(x!=0){
                non_zero=false;
            }
        }
        if(non_zero){
            return 0;
        }
        if(total!=0){
            return nums.size();
        }
        return nums.size()-1;
    }
};