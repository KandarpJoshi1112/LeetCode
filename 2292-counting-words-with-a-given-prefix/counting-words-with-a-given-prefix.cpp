class Solution {
public:
bool isPrefix(string s,string pre)
{
    string s2;
    if(s.size()>=pre.size())
    {
       
        s2=s.substr(0,pre.size());
        if(s2==pre)
        {
            return true;
        }
    }
    
        return false;
        
}
    int prefixCount(vector<string>& words, string pref) {
        int ans=0;
    for(int i=0;i<words.size();i++)
    {
        if(isPrefix(words[i],pref))
        {
            ans++;
        }
    }
    return ans;
        
    }
};