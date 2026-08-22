class Solution {
public:
    int solve(vector<int>&arr ,int curr, int i){
        if(i >= arr.size())
            return 0;

        int currProfit = arr[i] - curr;
        int buy = min(curr , arr[i]);
        int nextProfit = solve(arr , buy , i+1);
        return max(currProfit , nextProfit);      
    }
    int maxProfit(vector<int>& prices) {    
        return solve(prices , prices[0] , 1);
    }
};
