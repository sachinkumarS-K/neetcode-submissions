class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r = matrix.size(), col = matrix[0].size();

        int i = r - 1, j = 0;
         while(i >= 0 && j < col){

            int ele = matrix[i][j];
            if(ele == target)
                return true;
            else if(ele > target)
                i--;
            else
                j++;
            
        }
        return false;
    }
};
