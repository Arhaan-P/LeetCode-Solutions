class Solution {
public:

    bool isValid (int x, int y, int n, int m) {
        return (x >= 0 && x < m && y >= 0 && y < n);
    }

    vector<vector<int>> highestPeak(vector<vector<int>>& isWater) {
        int m = isWater.size();
        int n = isWater[0].size();

        vector<vector<int>> height(m, vector<int>(n, -1));
        queue<pair<int, int>> q;

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (isWater[i][j] == 1) {
                    height[i][j] = 0;
                    q.push({i, j});
                }
            }
        }

        vector<int> dir = {-1, 0, 1, 0, -1};

        while (!q.empty()) {
            auto [x, y] = q.front();
            q.pop();

            for (int i = 0; i < 4; i++) {
                int X = x + dir[i];
                int Y = y + dir[i + 1];

                if (isValid(X, Y, m, n) && height[X][Y] == -1) {
                    height[X][Y] = height[x][y] + 1;
                    q.push({X, Y});
                }
            }
        }
    return height;
    }
};