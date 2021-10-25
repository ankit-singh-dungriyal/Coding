class MinStack {
    Stack<Pair<Integer,Integer>> st = new Stack<>();
    int mn = Integer.MAX_VALUE;

    public MinStack() {
    }
    
    public void push(int val) {
        mn = Math.min(val,mn);
        st.push(new Pair(val,mn));
    }
    
    public void pop() {
        st.pop();
        if(!st.isEmpty())mn=st.peek().getValue();
        else mn = Integer.MAX_VALUE;
    }
    
    public int top() {
        return st.peek().getKey();
    }
    
    public int getMin() {
        return mn;
    }
}

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack obj = new MinStack();
 * obj.push(val);
 * obj.pop();
 * int param_3 = obj.top();
 * int param_4 = obj.getMin();
 */
