class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans;
        unordered_map<int, int>st;
        for(int i=0; i<nums.size(); i++){
            int req=target-nums[i];
            if(st.find(req)!=st.end()){
               ans.push_back(i);
               ans.push_back(st[req]);
               return ans;
            }
            st.insert({nums[i],i});
        }
        return ans;
    }
};