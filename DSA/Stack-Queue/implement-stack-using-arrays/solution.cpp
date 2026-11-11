class ArrayStack {
private:
    int arr[100];
    int topindex;
public:
    ArrayStack() {
        topindex=-1;

    }
    
    void push(int x) {
        topindex++;
        arr[topindex]=x;

   
    }
    
    int pop() {
        if(topindex==-1)return -1;
        return arr[topindex--];
        
        

  
    }
    
    int top() {
        if(topindex==-1)return -1;
        return arr[topindex];    
    }
    
    bool isEmpty() {
        return topindex==-1;
  
    }
};