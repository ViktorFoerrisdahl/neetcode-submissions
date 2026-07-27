class MinStack {
public:
    MinStack() = default;
    
    void push(int val) {
        stack.emplace_back(val);
    }
    
    void pop() {
        stack.pop_back();
    }
    
    int top() {
        return stack[stack.size() - 1];
    }
    
    int getMin() {
        long temp{2147483648};
        for (auto it : stack)
        {
            if (temp > it)
            {
            temp = it;
            }
        }
       return temp;
    }

private:
    vector<int> stack;
};
