class MinStack {
    int i=-1;
    vector<int> a;
    vector<int> b;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        a.push_back(val);
        i++;
        if(b.empty()){b.push_back(val);}
        else{
            int x=min(val,b.back());
            b.push_back(x);
        }
    }
    
    void pop() {
        a.pop_back();
        b.pop_back();
        i--;
    }
    
    int top() {
        if(i>=0){return a[i];}
        else return {};
    }
    
    int getMin() {
        return b.back();
    }
};
