class Solution {
public:
    int arr[10001];
    bool solve(vector<int>&nums, int n, int idx){
        if(idx == n-1) return true;
        if(arr[idx] != -1) return arr[idx];
        for(int i = 1; i<=nums[idx]; i++){
            if(solve(nums,n,idx+i) == true) return arr[idx] = true;
        }
        return arr[idx] = false;
    }
    bool canJump(vector<int>& nums) {
       int n = nums.size();
       memset(arr, -1, sizeof(arr)); 
       return solve(nums,n,0);
    }
};
