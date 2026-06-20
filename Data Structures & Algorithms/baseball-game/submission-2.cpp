
class Solution {
public:
    int calPoints(vector<string>& op) {
        stack<int> s;
        for(int i=0;i<op.size();i++){
            if(op[i]=="+"){
                int sum=s.top();
                s.pop();
                sum+=s.top();
                s.push(sum-s.top());
                s.push(sum);
            }
            else if(op[i]=="D"){
                s.push(2*s.top());
            }
            else if(op[i]=="C")s.pop();
            else{
                s.push(stoi(op[i]));
            }
        }
        int res=0;
        while(!s.empty()){
            res+=s.top();
            s.pop();
        }
        return res;
    }
};