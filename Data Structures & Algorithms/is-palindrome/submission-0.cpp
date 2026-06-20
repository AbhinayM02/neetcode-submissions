class Solution {
public:
    bool isPalindrome(string s) {
        int l=0;
        
        vector<char> p;
        for(int i=0;i<s.length();i++){
            if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')||(s[i]>='0'&&s[i]<='9'))
            p.push_back(tolower(s[i]));
        }
        int r=p.size()-1;
        while(l<r){
            if(p[l]==p[r]){
                l++;
                r--;
            }
            else return false;
        }
        return true;
    }
};
