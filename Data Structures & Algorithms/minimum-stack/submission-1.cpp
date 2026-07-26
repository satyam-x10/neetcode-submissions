class MinStack {
   public:
    stack<int> st;
    stack<int> mini;
    int minimum = INT_MAX;

    void push(int val) {
        st.push(val);
        minimum = min(minimum, val);
        mini.push(minimum);
    }

    void pop() {
        st.pop();
        mini.pop();

        if (mini.empty())
            minimum = INT_MAX;
        else
            minimum = mini.top();
    }

    int top() { return st.top(); }

    int getMin() { return minimum; }
};
