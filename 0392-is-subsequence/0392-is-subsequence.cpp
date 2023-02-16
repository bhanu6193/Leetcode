class Solution {
public:
    bool isSubsequence(string s, string t) {
        int c=0;
        int i=0;
            for(int j=0;j<t.size() && i<s.size();j++){
                if(s[i]==t[j])
                i++;
                
            }
        
        if(i==s.size())
        return true;
        else
        return false;
    }
};