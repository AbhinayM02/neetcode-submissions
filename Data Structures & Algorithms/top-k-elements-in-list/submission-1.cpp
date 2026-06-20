class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        if(nums.empty())return {};
        unordered_map<int,int> mpp;
        for(auto it:nums){
            mpp[it]++;
        }
        vector<int> a;
        int p=0;
        while(!(p==k)){
            int max=nums[0];;
        for(int i=0;i<nums.size();i++){
            if(mpp[max]<mpp[nums[i]]){
                max=nums[i];
            }
        }
        a.push_back(max);
        mpp[max]=0;
        p++;
        }
        return a;
    }
};
