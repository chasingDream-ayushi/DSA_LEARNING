class Solution {
public:
    int fxn(int i ,int j, vector<vector<int>>&matrix , vector<vector<int>> &dp){
        int n = matrix.size();
        if (j < 0 || j >= n) return INT_MAX;

        if (i == n - 1) return matrix[i][j];

        if(dp[i][j] != INT_MAX){
            return dp[i][j];
        }
        int d = fxn(i+1 , j , matrix , dp);
        int dL = fxn(i+1 , j-1 , matrix , dp);
        int dR = fxn(i+1 , j+1 , matrix , dp);
        
        return dp[i][j] = matrix[i][j] + min(d, min(dL, dR));
        
    }
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n = matrix.size();
        vector<vector<int>> dp(n , vector<int>(n, INT_MAX));
        int ans = INT_MAX;
        for (int j = 0; j < n; j++)
            ans = min(ans, fxn(0, j, matrix, dp));

        return ans;
        
        
    }
};