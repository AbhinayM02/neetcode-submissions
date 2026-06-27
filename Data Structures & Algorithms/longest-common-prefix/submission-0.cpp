class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";
        
        string shortest = *min_element(strs.begin(), strs.end(), 
            [](const string& a, const string& b) {
                return a.size() < b.size();
            });
            
        for (size_t i = 0; i < shortest.size(); ++i) {
            for (const string& other : strs) {
                if (other[i] != shortest[i]) {
                    return shortest.substr(0, i);
                }
            }
        }
        
        return shortest;
    }
};