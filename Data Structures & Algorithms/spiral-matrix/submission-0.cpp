class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int r = matrix.size() , c = matrix[0].size();
        int count = 0 ;
        vector<int>ans;
        int sr = 0 , er = r-1 , sc = 0 , ec = c-1;
        while(count < r*c){
            for(int i = sr ; i<=ec && count < r*c ; i++){
                cout<<matrix[sr][i]<<" ";
                count++;
                ans.push_back(matrix[sr][i]);
            }
            sr++;
            for (int i = sr; i <= er && count < r * c; i++)
                ans.push_back(matrix[i][ec]), count++;
            
            ec--;
            for(int i = ec ; i >= sc && count < r*c; i--){
                
                cout<<matrix[er][i]<<" ";
                count++;
                ans.push_back(matrix[er][i]);
            }
            er--;
            for(int i = er ; i >= sr && count < r*c ; i--){
                cout<<matrix[i][sc]<<" ";
                count++;
                ans.push_back(matrix[i][sc]);
            }
            sc++;
            
        }
        return ans;
    }
};
