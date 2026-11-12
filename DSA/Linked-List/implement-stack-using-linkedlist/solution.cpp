class LinkedListStack {
    struct node {
        int data;
        node* next;
        node(int val) {
            data = val;
            next = nullptr;
        }
    };
    node *topNode;
    int size=0;
public:
    LinkedListStack() {
        topNode=NULL;

    }
    
    void push(int x) {
        node* temp=new node(x);
        temp->next=topNode;

        topNode=temp;
        size++;
   
    }
    
    int pop() {
        if(topNode==NULL)return -1;
        node* temp=topNode;
        topNode=topNode->next;
        int del=temp->data;
        free (temp);
        return del;
  
    }
    
    int top() {
        if(topNode==NULL)return -1;
        return topNode->data;

    
    }
    
    bool isEmpty() {
        return topNode==NULL;
  
    }
};