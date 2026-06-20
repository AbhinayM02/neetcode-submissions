class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> mpp;
        if(nums.empty())return {};
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        int max=nums[0];
        for(int i=1;i<nums.size();i++){
            if(mpp[nums[i]]>mpp[max]){
                max=nums[i];
            }
        }
        return max;
    }
};