class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        int l = 0 , h = arr.size()-1;
        while(l < h){
            int sum = arr[l] + arr[h];
            if(sum > target)
                h--;
            else if(sum < target)
                l++;
            else 
                return {l+1 , h+1};
        }
    }
};
