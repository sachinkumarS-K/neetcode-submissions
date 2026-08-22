class Solution {
public:
    int solve(int i , vector<int>&arr , vector<int>&dp){
        if(i >= arr.size())
            return 0;
        if(dp[i] != -1) return dp[i];
        int oneStep = arr[i] + solve(i+1 , arr , dp);
        int twoStep = arr[i] + solve(i+2 , arr , dp);

        return dp[i] = min(oneStep , twoStep);
    }
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int>dp(cost.size()+1 , -1);
        return min(solve(0 , cost , dp) , solve(1 , cost , dp));
    }
};
