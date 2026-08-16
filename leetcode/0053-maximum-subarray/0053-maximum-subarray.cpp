class Solution {
public:
    int maxSubArray(vector<int>& nums) {
    int maxsum=INT_MIN;
    int currsum=0;
       for(int a:nums){
          currsum+=a;
          maxsum=max(maxsum,currsum);
          if(currsum<1){
            currsum=0;
          }
       }
       return maxsum;
    }
};