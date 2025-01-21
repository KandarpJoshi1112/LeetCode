class Solution {
public:
    long long gridGame(vector<vector<int>>& grid) {
        int n = grid[0].size();
        vector<long long> prefixTop(n + 1, 0), prefixBottom(n + 1, 0);

    
        for (int j = 0; j < n; ++j) {
            prefixTop[j + 1] = prefixTop[j] + grid[0][j];
            prefixBottom[j + 1] = prefixBottom[j] + grid[1][j];
        }

        long long result = LLONG_MAX;

        
        for (int j = 0; j < n; ++j) {
            long long topRemaining = prefixTop[n] - prefixTop[j + 1];
            long long bottomRemaining = prefixBottom[j];
            long long score = max(topRemaining, bottomRemaining);
            
            result = min(result, score);
        }

        return result;
    }
};
