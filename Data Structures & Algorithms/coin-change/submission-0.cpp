class Solution {
public:
    int solve(int i , int amt , vector<int>&arr , vector<vector<int>>&dp){
        if(amt == 0) return 0;
        if(i >= arr.size() || amt < 0) return INT_MAX;
        if(dp[i][amt] != -1)    return dp[i][amt];
        int inc = INT_MAX;
        int res = solve(i , amt - arr[i] , arr , dp);
        if(res != INT_MAX)
            inc = 1 + res;

        int exc = solve(i+1 , amt , arr , dp);

        return dp[i][amt] = min(inc , exc);
    }

    int coinChange(vector<int>& coins, int amount) {
        int n = coins.size();
        vector<vector<int>>dp(n+1 , vector<int>(amount+1 , -1));
        int ans = solve(0, amount , coins , dp);
        return (ans == INT_MAX ? -1 : ans);
    }
};