class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> hash(256,-1);
        int l=0,r=0;
        int len=0,maxlen=0;
        while(r<s.length()){
            if(hash[s[r]]==-1){
                len=len+1;
            }
            else{
                l=max(l,hash[s[r]]+1);
                len=r-l+1;
            }
            hash[s[r]]=r;
            r++;
            maxlen=max(len,maxlen);
        }
        return maxlen;
    }
};
