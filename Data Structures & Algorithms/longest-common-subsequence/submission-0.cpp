class Solution {
public:
    int solve(int a , int b , string &str1 , string &str2 , vector<vector<int>>&dp){
        if(a < 0 || b < 0)    return 0;
        if(dp[a][b] != -1)    return dp[a][b] ;
        int ans = 0 ;

        if(str1[a] == str2[b]){
            ans += 1 + solve(a-1 , b-1 , str1 , str2 , dp);
        }
        else{
            ans = max(solve(a-1 , b , str1 , str2 , dp) , solve(a , b-1 , str1 , str2 , dp));
        }

        return dp[a][b] = ans;
    }
    int longestCommonSubsequence(string text1, string text2) {
        int n1 = text1.size() , n2 = text2.size();
        vector<vector<int>>dp(n1+1 , vector<int>(n2+1,-1));
        return solve(n1-1 , n2-1 , text1 , text2 , dp);
    }
};
