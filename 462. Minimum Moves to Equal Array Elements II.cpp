class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int temp = nums[n/2], ans = 0;
        for(int i = 0; i<n; i++){
            ans+= (abs(nums[i]-temp));

        }
        return ans;
    }
};
