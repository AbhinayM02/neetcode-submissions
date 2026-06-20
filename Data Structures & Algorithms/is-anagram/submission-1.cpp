class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> mpp1;
        unordered_map<char,int> mpp2;
        if(s.length() != t.length())return false;
        for(int i=0;i<s.length();i++){
            mpp1[s[i]]++;
        }
        for(int i=0;i<t.length();i++){
            mpp2[t[i]]++;
        }
        int res=-1;
        for(int i=0;i<s.length();i++){
            if(mpp1[s[i]]!=mpp2[s[i]]){
                res=0;
                break;
            }
        }
        return res==-1;
    }
};
