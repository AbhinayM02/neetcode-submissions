class Solution {
public:
    bool validPalindrome(string s) {
        int c=0;
        int l=0;
        int r=s.length()-1;
        if(ispalin(s,l,r)){return true;}
        while(l<r){
            if(s[l]!=s[r]){
                return (ispalin(s,l,r-1)||ispalin(s,l+1,r));
            }
            l++;
            r--;
        }
        return true;
    }
private:
    bool ispalin(string s,int l,int r){
        while(l<r){
            while(l<r && !isalnum(s[l])){l++;}
            while(l<r && !isalnum(s[r])){r--;}
            if(s[l]!=s[r]){
                return false;
            }
            l++;r--; 
        }
        return true;
    }
};