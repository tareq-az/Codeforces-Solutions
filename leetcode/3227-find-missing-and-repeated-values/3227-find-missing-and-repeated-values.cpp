class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n=grid.size();
        vector<int>ans;
        unordered_set<int>s;
        int expected_sum=((n*n)*(n*n+1))/2;
        int cur_sum=0;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(s.find(grid[i][j])!=s.end()){
                   ans.push_back(grid[i][j]);
                }
                else {s.insert(grid[i][j]);
                cur_sum+=grid[i][j];
                }
            }
        }
        int missing_num=expected_sum-cur_sum;
        ans.push_back(missing_num);
        return ans;
    }
};