class Solution {
public:
    vector<vector<int>> restoreMatrix(vector<int>& rowSum, vector<int>& colSum) {
        int rows = rowSum.size();
        int cols = colSum.size();

        vector<vector<int>> ans(rows, vector<int>(cols, 0));

        int i = 0;
        int j = 0;

        while(i < rows && j < cols) {
            int minimum = min(rowSum[i], colSum[j]);
            ans[i][j] = minimum;
            rowSum[i] = rowSum[i] - minimum;
            colSum[j] = colSum[j] - minimum;

            if(rowSum[i] == 0) {
                i ++;
            }
            if(colSum[j] == 0) {
                j++;
            }
        }
        return ans;
    }
};