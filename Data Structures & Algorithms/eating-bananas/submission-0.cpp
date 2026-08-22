class Solution {
public:
    bool check(vector<int>&arr , int x , int h){
        long long count = 0;

        for(int i = 0 ; i < arr.size() ; i++)
            count += (arr[i] + x - 1) / x;   

        return count <= h;
    }

    int minEatingSpeed(vector<int>& piles, int hour) {

        int l = 1;
        int h = *max_element(piles.begin(), piles.end());

        int ans = h;

        while(l <= h){

            int m = l + (h-l)/2;

            if(check(piles , m , hour)){
                ans = m;
                h = m - 1;
            }
            else{
                l = m + 1;
            }
        }

        return ans;
    }
};