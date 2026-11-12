class QueueStack {
    queue<int>q;
public:
    QueueStack() {
    }
    
    void push(int x) {
        q.push(x);
   
    }
    
    int pop() {
        int n=q.size();
        for(int i=0;i<n-1;i++){
            q.push(q.front());
            q.pop();
        }
        int val=q.front();
        q.pop();
        return val;
  
    }
    
    int top() {
        int n=q.size();
        for(int i=0;i<n-1;i++){
            q.push(q.front());
            q.pop();
        }
        int val=q.front();
        q.push(val);
        q.pop();
        return val;


    
    }
    
    bool isEmpty() {
        return q.empty();

  
    }
};