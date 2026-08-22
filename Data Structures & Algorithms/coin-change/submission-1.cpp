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
    int solveUsingTabulation(vector<int>&arr , int amt){
        int n = arr.size();
        vector<vector<int>>dp(n+1 , vector<int>(amt+1 , INT_MAX));
        for(int i = 0 ; i<= n ; i++)
            dp[i][0] = 0;

        for(int i = n-1 ; i >= 0 ; i--){
            for(int j = 1 ; j<= amt ; j++){
                int inc = INT_MAX;
                if(j - arr[i] >= 0){   
                int res = dp[i][j - arr[i]];
                if(res != INT_MAX)
                    inc = 1 + res;
            }

                int exc = dp[i+1][j];

                dp[i][j] = min(inc , exc);
            }
        }
        return dp[0][amt];
    }

    int coinChange(vector<int>& coins, int amount) {
        // int n = coins.size();
        // vector<vector<int>>dp(n+1 , vector<int>(amount+1 , -1));
        // int ans = solve(0, amount , coins , dp);
        // return (ans == INT_MAX ? -1 : ans);
        int ans = solveUsingTabulation(coins , amount);
        return (ans == INT_MAX ? -1 : ans);
    }
};