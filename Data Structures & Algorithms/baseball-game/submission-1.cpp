
class Solution {
public:
    int calPoints(vector<string>& op) {
        stack<int> s;
        for(int i=0;i<op.size();i++){
            if((op[i]>="0"&&op[i]<="9")||(op[i]>="-0"&&op[i]<="-9")){
                int g=stoi(op[i]);
                s.push(g);
            }
            if(op[i]=="+"){
                int sum=s.top();
                s.pop();
                sum+=s.top();
                s.push(sum-s.top());
                s.push(sum);
            }
            if(op[i]=="D"){
                s.push(2*s.top());
            }
            if(op[i]=="C")s.pop();
        }
        int res=0;
        while(!s.empty()){
            res+=s.top();
            s.pop();
        }
        return res;
    }
};