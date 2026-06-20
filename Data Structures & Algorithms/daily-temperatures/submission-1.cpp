class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        vector<int> res;
        for(int i=0;i<temp.size()-1;i++){
            int j=i+1;
            while(j<temp.size() && temp[i]>=temp[j] ){
                j++;
            }
            if(j>=temp.size())res.push_back(0);
            else res.push_back(j-i);       
        }
        res.push_back(0);
        return res;
    }
};
