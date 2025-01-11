class Solution {
public:
    bool canConstruct(string s, int k) {
    
               // Step 1: Create a frequency map for characters in the string
        unordered_map<char, int> freq;
        for (char c : s) {
            freq[c]++;
        }

        // Step 2: Count how many characters have an odd frequency
        int oddCount = 0;
        for (const auto& entry : freq) {
            if (entry.second % 2 == 1) {
                oddCount++;
            }
        }

        // Step 3: Check if we can form k palindromes
        // If the number of odd frequencies exceeds k, return false
        // Also, if k is greater than the number of characters in the string, it's impossible
        if (oddCount > k || k > s.length()) {
            return false;
        }

        return true;

    }
};