class Solution {
public:
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        
        //Finding Freq of chars in whole words2 vector
        int maxFreqWords2[26]={0};
        for(string word:words2)
        {
            int freq[26]={0};
            for(char c:word)
                freq[c-'a']++;
            for(int i=0;i<26;i++)
            maxFreqWords2[i]=max(freq[i],maxFreqWords2[i]);

        }

        //Now going for words1 to check if freq match
        vector<string> ans;
        for(string word:words1)
        {
            int freq[26]={0};
            for(char c:word)
                freq[c-'a']++;
            
            if(isUniversal(freq,maxFreqWords2))
            ans.push_back(word);
        }
        
        return ans;
        
    }

    bool isUniversal(int f[],int max[])
        {
            for(int i=0;i<26;i++)
            {
                if(f[i]<max[i])
                    return false;
            }
            return true;
        }
};