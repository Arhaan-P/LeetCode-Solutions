class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int n = image.size();
        
        for (int i = 0; i < n; i++) {
            int m = image[i].size();
            for (int j = 0; j <= (m - 1) / 2; j++) {
                int temp = image[i][j] ^ 1;
                image[i][j] = image[i][m - 1 - j] ^ 1;
                image[i][m - 1 - j] = temp;
            }
        }
        return image;
    }
};