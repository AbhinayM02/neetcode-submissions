class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {

        unordered_map<int,int> mpp;
        int res=0;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        for(int i=0;i<nums.size();i++){
            if(mpp[nums[i]]>=2){
                res=1;
                break;
            }
        }
        return res==1;

    }
};