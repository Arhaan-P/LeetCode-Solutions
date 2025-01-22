class Solution {
    bool isValid(int x, int y, int m, int n) {
        return (x >= 0 && x < m && y >= 0 && y < n);
    }

public:
    vector<vector<int>> highestPeak(vector<vector<int>>& isWater) {
        queue<pair<int, int>> q;
        int m = isWater.size();
        int n = isWater[0].size();
        vector<vector<int>> height(m, vector<int>(n, 0));

        vector<vector<bool>> visited(m, vector<bool>(n, false));
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (isWater[i][j] == 1) {
                    q.push(make_pair(i, j));
                    visited[i][j] = true;
                }
            }
        }

        vector<int> dir = {-1, 0, 1, 0, -1};
        int level = 0;
        while (!q.empty()) {
            int size = q.size();
            for (int i = 0; i < size; i++) {
                pair<int, int> curr = q.front();
                q.pop();

                int x = curr.first;
                int y = curr.second;
                for (int d = 0; d < 4; d++) {
                    int X = x + dir[d];
                    int Y = y + dir[d + 1];
                    if (isValid(X, Y, m, n) && !visited[X][Y]) {
                        q.push(make_pair(X, Y));
                        height[X][Y] = level + 1;
                        visited[X][Y] = true;
                    }
                }
            }
            level++;
        }
        return height;
    }
};
