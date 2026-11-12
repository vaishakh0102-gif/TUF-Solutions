class LinkedListQueue {
    struct node {
        int data;
        node* next;
        node(int val) {
            data = val;
            next = nullptr;
        }
        
    };
    node* start;
    node* end;
public:
    LinkedListQueue() {
        start=nullptr;
        end=nullptr;
    }
    
    void push(int x) {
        node* temp=new node(x);
        if(start==nullptr){
            start=end=temp;
            
        }
        else{
            end->next=temp;
            end=temp;
        }

   
    }
    
    int pop() {
        if(start==nullptr)return -1;
        node* temp=start;
        start=start->next;
        int del=temp->data;
        delete temp;
        return del;
  
    }
    
    int peek() {
        if(start==nullptr)return -1;
        return start->data;
    
    }
    
    bool isEmpty() {
        return start==nullptr;
  
    }
};