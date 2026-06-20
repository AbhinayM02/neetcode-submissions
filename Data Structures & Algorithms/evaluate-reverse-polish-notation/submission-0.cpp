class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        
        stack<int> s;
        for(int i=0;i<tokens.size();i++){
            if(tokens[i]=="+"){
                int sum=0;
                sum=s.top();
                s.pop();
                sum+=s.top();
                s.pop();
                s.push(sum);
            }
            else if(tokens[i]=="*"){
                int sum=s.top();
                s.pop();
                sum*=s.top();
                s.pop();
                s.push(sum);
            }
            else if(tokens[i]=="-"){
                int sum=s.top();
                s.pop();
                sum=s.top()-sum;
                s.pop();
                s.push(sum);
            }
            else if(tokens[i]=="/"){
                int sum=s.top();
                s.pop();
                sum=s.top()/sum;
                s.pop();
                s.push(sum);
            }
            else{
                int o=stoi(tokens[i]);
                s.push(o);
            }
            
        }
        return s.top();
    }
};
