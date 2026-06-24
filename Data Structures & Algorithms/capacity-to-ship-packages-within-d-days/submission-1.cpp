class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        auto m=max_element(weights.begin(),weights.end());
        int low=*m;
        int n=weights[weights.size()-1];
        int high=0;
        for(auto it:weights){
            high+=it;
        }
        int ans=INT_MAX;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(pday(weights,mid)<=days){
                ans=min(ans,mid);
                high=mid-1;
            }
            else low=mid+1;
        }
        return ans;
    }
    int pday(vector<int>& weights,int cap){
        int r=1;
        int l=0;
        for(int i=0;i<weights.size();i++){
            if(l+weights[i] >cap){
                r++;
                l=weights[i];
            }
            else l+=weights[i];
        }
        return r;
    }
};