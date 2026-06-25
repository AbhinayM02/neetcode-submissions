class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty())return 0;
        unordered_map<int,int> mpp;
        for(auto it:nums){
            mpp[it]++;
        }
        vector<int> res;
        for(int i=0;i<nums.size();i++){
            int a=nums[i];
            int m=0;
            while(mpp[a]!=0){
                m++;
                a++;
            }
            res.push_back(m);
        }
        auto q=max_element(res.begin(),res.end());
        int max=*q;
        return max;
    }
};
