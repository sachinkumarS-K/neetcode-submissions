class Solution {
public:
    int solve(int i , vector<int>&arr , vector<int>&dp){
        if(i >= arr.size())  return 0;
        if(dp[i] != -1) return dp[i];
        int inc = arr[i] + solve(i+2 , arr, dp);
        int exc = solve(i+1 , arr , dp);
        return dp[i] = max(inc , exc);
    }
    int rob(vector<int>& nums) {
        vector<int>dp(nums.size()+1 , -1);
        return solve(0 , nums , dp);
    }
};
