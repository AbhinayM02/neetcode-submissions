class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l=0,r=1;
        int p=0,maxp=0;
        while(r<prices.size()){
            if(prices[l]>prices[r]){
                l=r;
            }
            else{
                p=prices[r]-prices[l];
                maxp=max(maxp,p);
            }
            r++;
        }
        return maxp;
    }
};
