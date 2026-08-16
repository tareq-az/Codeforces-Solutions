class Solution {
public:
    int binSearch(int st, int end, vector<int>& arr, int tar) {
    if(st > end) return -1;

    int mid = (st + end) / 2;

    if(arr[mid] == tar) {
        return mid;
    }
    else if(arr[mid] < tar) {
        return binSearch(mid + 1, end, arr, tar);
    }
    else {
        return binSearch(st, mid - 1, arr, tar);
    }
}
    int search(vector<int>& nums, int target) {
        
        int st=0;
        int end=nums.size()-1;
        return binSearch(st, end, nums, target);
    }
};