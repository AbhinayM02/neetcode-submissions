class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       unordered_map<string,vector<string>> mpp;
       vector<vector<string>> res;
       for(int i=0;i<strs.size();i++){
        string s=strs[i];
        sort(s.begin(),s.end());
        mpp[s].push_back(strs[i]);
       }
       for(auto &x:mpp){
        res.push_back(x.second);
       }
       return res;
    }
};
