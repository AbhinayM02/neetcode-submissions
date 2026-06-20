class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i=0;
        int l=0,r=0;
        int l1=word1.length();
        int l2=word2.length();
        string s(l1+l2,' ');
        while(l<word1.length() && r<word2.length()){
            if(i%2==0){
                s[i]=word1[l];
                i++;
                l++;
            }
            else{
                s[i]=word2[r];
                i++;
                r++;
            }
        }
        while(l<l1){
            s[i++]=word1[l++];
        }
        while(r<l2){
            s[i++]=word2[r++];
        }
        return s;
    }
};