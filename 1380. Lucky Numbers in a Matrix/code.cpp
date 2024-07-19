class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        vector<int> ans;

        for(int i = 0; i < rows; i++) {
            int col_idx = -1;
            int low = INT_MAX;
            for(int j = 0; j < cols; j++) {
                // Finding min element in row and saving the column index
                if(matrix[i][j] < low) {
                    low = matrix[i][j];
                    col_idx = j;
                }
                
            }
            int flag = 1;
            // Checking if the row minimum is the column maximum
            for(int k = 0; k < rows; k++) {
                if(matrix[k][col_idx] > low) {
                    flag = 0;
                    break;
                }
            }
            if(flag) {
                ans.push_back(low);
            }
         }
         return ans;
    }
};