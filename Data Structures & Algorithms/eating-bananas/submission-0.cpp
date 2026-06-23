class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        auto m=max_element(piles.begin(),piles.end());
        int max=*m;
        int low=1,high=max;
        int ans;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(hrs(piles,mid)<=h){
                ans=mid;
                high=mid-1;
            }
            else low=mid+1;
        }
        return ans;
    }
    int hrs(vector<int>& piles,int mid){
        int total=0;
        for(int i=0;i<piles.size();i++){
            total+=(piles[i]+mid-1)/mid;
        }
        return total;
    }
};
