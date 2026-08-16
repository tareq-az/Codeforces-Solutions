#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int psum = nums[0];
        int n = nums.size();

        for (int i = 0; i < n - 1; i++) {
            if (nums[i + 1] - nums[i] == 1) {
                psum += nums[i + 1];
            } else {
                break;
            }
        }

        while (find(nums.begin(), nums.end(), psum) != nums.end()) {
            psum++;
        }

        return psum;
    }
};