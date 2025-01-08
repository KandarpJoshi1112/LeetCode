class Solution {
public:
bool isPrefixAndSuffix(string str1, string str2) {
   if(str2.starts_with(str1)&& str2.ends_with(str1))
   {
    return true;
   }
   else{
     return false;
   }
  

   
   
    
}

    int countPrefixSuffixPairs(vector<string>& words) {
       int answer=0;
        
        // Iterate through all words
        for (int i = 0; i < words.size(); i++) {
            // Compare with all other words
            for (int j = i+1; j < words.size(); j++) {
                if (i != j && isPrefixAndSuffix(words[i],words[j])) { 
                    answer++;
                }
 
                }
            }
            return answer;
        }

        
    
};
