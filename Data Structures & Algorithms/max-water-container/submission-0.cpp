class Solution {
public:
    int maxArea(vector<int>& heights) {
        int area = 0;
        int l = 0 , h = heights.size()-1;
        while(l < h){
            int x = min(heights[l] , heights[h]);
            area = max(area , x*(h-l));
            if(heights[h] > heights[l]){
                l++;
            }
            else{
                h--;
            }
        }

        return area;
    }
};
