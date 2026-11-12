class ArrayQueue {
private:
    int size=100;
    int arr[100];
    int start;
    int end;
    int currsize;
public:
    ArrayQueue() {
        start=-1;
        end=-1;
        currsize=0;
        
    }
    
    void push(int x) {
        if(currsize==size)return;
        if(currsize==0){
            start=0,end=0;
        }
        else{
            end=(end+1)%size;
        }
        arr[end]=x;
        currsize++;
   
    }
    
    int pop() {
        if (currsize == 0) {
            return -1;
        }
        int popped = arr[start];
        if (currsize == 1) {
            start = -1;
            end = -1;
        } else {
            start = (start + 1) % size;
        }
        currsize--;
        return popped;

  
    }
    
    int peek() {
        if (currsize == 0) {
            return -1;
        }
        return arr[start];

    
    }
    
    bool isEmpty() {
        return currsize==0;
  
    }
};