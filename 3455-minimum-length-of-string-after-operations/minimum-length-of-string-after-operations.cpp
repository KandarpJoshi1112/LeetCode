class Solution {
public:
    int minimumLength(string s) {
        map<char, int> memo;

        for (char c : s) 
        {
            memo[c]++;
        }

        int ans = 0;

        for (auto &pair : memo) 
        {
            while (pair.second >= 3)
            {
                pair.second -= 2;
            }
        }
        for (auto &pair : memo)
        {
            ans += pair.second;
        }
        return ans;
    }
    
};