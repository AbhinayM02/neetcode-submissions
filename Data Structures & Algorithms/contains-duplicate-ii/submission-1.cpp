class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        for(int i=0;i<nums.size()-1;i++){
            int j=i+1;
            while(j<nums.size()&&nums[i]!=nums[j]){
                j++;
            }
            if(j<nums.size()&&abs(i-j)<=k)return true;
        }
        return false;
    }
};