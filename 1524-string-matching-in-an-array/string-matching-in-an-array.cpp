class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        vector<string> res;
        
        // Iterate through all words
        for (int i = 0; i < words.size(); i++) {
            // Compare with all other words
            for (int j = 0; j < words.size(); j++) {
                if (i != j) {  // Skip comparing the word with itself
                    // Check if words[j] is a substring of words[i]
                    if (words[i].find(words[j]) != string::npos) {
                        // Add the word if it's not already in the result
                        if (find(res.begin(), res.end(), words[j]) == res.end()) {
                            res.push_back(words[j]);
                        }
                    }
                }
            }
        }

        return res;
    }
};
