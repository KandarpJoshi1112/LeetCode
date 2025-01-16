class Solution {
public:
    int maxScore(string s) {
        int totalOnes = 0;
        int zeroesCount = 0, onesCount = 0, maxScore = 0;

        // Count total ones in the string
        for (char c : s) {
            if (c == '1') totalOnes++;
        }

        // Iterate through the valid split positions
        for (int i = 0; i < s.size() - 1; i++) {
            if (s[i] == '0') zeroesCount++;
            else if (s[i] == '1') totalOnes--;

            int score = zeroesCount + totalOnes; // Calculate current score
            maxScore = max(maxScore, score);    // Update maximum score
        }

        return maxScore;
    }
};
