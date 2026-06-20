class Solution {
public:
    bool isValid(string s) {
        if(s.empty())return true;
        stack<int> st;
        unordered_map<char,char> mpp;
        mpp[')']='(';
        mpp['}']='{';
        mpp[']']='[';
        for(int i=0;i<s.length();i++){
            if(s[i]=='('||s[i]=='{'||s[i]=='['){
                st.push(s[i]);
            }
            else if(s[i]==')'||s[i]=='}'||s[i]==']'){
                if(!st.empty() && st.top()==mpp[s[i]]){
                    st.pop();
                }
                else{ return false;}
            }
            else continue;
        }
        return st.empty();
    }
};
