class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> s;
        for(auto it:asteroids){
            bool des=false;
            while(!s.empty() && s.top()>0 && it<0){
                if(abs(s.top())<abs(it)){
                    s.pop();
                    continue;
                }
                else if(abs(s.top())==abs(it)){
                    s.pop();
                    des=true;
                    break;
                }
                else{
                    des=true;
                    break;
                }
            }
            if(!des){s.push(it);}
        }
        vector<int> res;
        while(!s.empty()){
            res.push_back(s.top());
            s.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }
};