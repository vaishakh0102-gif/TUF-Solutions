class StackQueue {
    stack<int>st1;
    stack<int>st2;
public:
    StackQueue() {
    }
    
    void push(int x) {
        while(!st1.empty()){
            st2.push(st1.top());
            st1.pop();
        }
        st1.push(x);
         while(!st2.empty()){
            st1.push(st2.top());
            st2.pop();
        }
    }
    
    int pop() {
        int val=st1.top();
        st1.pop();
        return val;
  
    }
    
    int peek() {
        return st1.top();
    
    }
    
    bool isEmpty() {
        return st1.empty();
  
    }
};