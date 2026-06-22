class Solution {
public:
    int mySqrt(int x) {
        long long low=1,high=x;
        long long ans=0,mid;
        while(low<=high){        
        mid=low+(high-low)/2;
        long long p=mid*mid;
        if(p>x){
            high=mid-1;
        }
        else{
            ans=mid;
            low=mid+1;
        }
        }
        return ans;
    }
};