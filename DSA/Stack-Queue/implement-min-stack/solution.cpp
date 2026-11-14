


class MinStack {
    stack<pair<int,int>>st;
public:
    MinStack() {
   
    }

  void push(int value) {
    if(st.empty()){
        st.push({value,value});
    }
    else{
        st.push({value,min(value,st.top().second)});
    }
  
  }

  void pop() {
    if (!st.empty()) {
        st.pop();
    }

  
  }

  int top() {
    if(st.empty())return -1;
    return st.top().first;
  
  }

  int getMin() {
    return st.top().second;
  }
};