class Solution {
public:
    int solve(int i , vector<int>&arr , vector<int>&dp , int flag){
        int n = arr.size();
        if((i >= n-1 && flag) || (i >= n && !flag))    return 0;
        if(dp[i] != -1) return dp[i] ;

        int inc = arr[i] + solve(i+2 , arr , dp , flag);
        int exc = solve(i+1 , arr , dp , flag);
        return dp[i] = max(inc , exc);
    }
    int rob(vector<int>& arr) {
        int n = arr.size();
        if(n == 1)  return arr[0];
        vector<int>dp1(n+1,-1);
        vector<int>dp2(n+1,-1);
        return max(solve(0,arr,dp1,true) , solve(1,arr,dp2,false));
    }
};
