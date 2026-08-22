class Solution {
public:
    int solve(int i , int e , vector<int>&arr , vector<int>&dp){
        if(i > e)  return 0;
        if(dp[i] != -1) return dp[i];

        int inc = arr[i] + solve(i+2 ,e ,arr , dp);
        int exc = solve(i+1 , e , arr , dp);

        return dp[i] =  max(inc , exc);
    }
    int rob(vector<int>& arr) {
        int n = arr.size();
        if(n == 1) return arr[0];

        vector<int> dp1(n+1, -1);
        vector<int> dp2(n+1, -1);
        
        int case1 = solve(0 , n-2 , arr , dp1);
        int case2 = solve(1 , n-1 , arr , dp2);
        return max(case1 , case2);
    }
};
