class MinStack {
public:
    stack<int> st;
    stack<int> minst;
    MinStack() {
        
    }
    
    void push(int val) {
        st.push(val);
        if(minst.empty()) minst.push(val);
        else{
            if(val<=minst.top())  minst.push(val);
        }
    }
    
    void pop() {
        int top_val=st.top();
        st.pop();
        if(top_val==minst.top())  minst.pop();
    }
    
    int top() {
        if(st.empty()) return -1;

        return st.top();
    }
    
    int getMin() {
        if(minst.empty()) return -1;
        return minst.top();
    }
};
