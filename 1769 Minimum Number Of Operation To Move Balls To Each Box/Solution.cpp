class Solution {
public:
    vector<int> minOperations(string boxes) {
        int n = boxes.size();
        vector<int> ans(n, 0);

        // Left-to-right pass
        int balls = 0, ops = 0;
        for (int i = 0; i < n; i++) {
            ans[i] += ops; 
            balls += (boxes[i] == '1'); 
            ops += balls; 
        }

        // Right-to-left pass
        balls = 0, ops = 0;
        for (int i = n - 1; i >= 0; i--) {
            ans[i] += ops; 
            balls += (boxes[i] == '1'); 
            ops += balls; 
        }

        return ans;
    }
};
