class Solution {
private:
    int gridways(int r, int c, int m, int n, vector<vector<int>>& dp) {
        if (r >= m || c >= n) {
            return 0;
        }
        if (r == m - 1 && c == n - 1) {
            return 1;
        }
        if (dp[r][c] != -1) {
            return dp[r][c];
        }
        
        int one = gridways(r + 1, c, m, n, dp);
        int two = gridways(r, c + 1, m, n, dp);
        
        return dp[r][c] = one + two;
    }

public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m, vector<int>(n, -1));
        return gridways(0, 0, m, n, dp);
    }
};

