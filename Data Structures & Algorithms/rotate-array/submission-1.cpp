class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int c=0;
        while(c<k){
        int key=nums[nums.size()-1];
        int i=nums.size()-1;
        while(i>0){
            nums[i]=nums[i-1];
            i--;
        }
        nums[i]=key;
        c++;
        }
    }
};