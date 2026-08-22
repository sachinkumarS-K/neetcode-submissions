class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0 , h = nums.size()-1;
        while(l <= h){
            int m = l + (h-l)/2;
            if(nums[m] == target)
                return m;
            else if(nums[m] > target)
                h--;
            else
                l++;
        }
        return -1;
    }
};
