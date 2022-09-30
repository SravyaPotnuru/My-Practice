//Implement Queue Using Stacks

class MyQueue {
public:
    stack<int>s,s1;
    MyQueue() {
        
    }
    
    void push(int x) {
        s.push(x);
    }
    
    int pop() {
        if(s1.empty()){
     while(!s.empty()){
         s1.push(s.top());
         s.pop();
     }}
        int a=s1.top();
        s1.pop();
         
        return a;
    }
    
    int peek() {
       if(s1.empty()){
     while(!s.empty()){
         s1.push(s.top());
         s.pop();
     }}
        int a=s1.top();
        
         
        return a;
    }
    
    bool empty() {
        
        return (s.empty() && s1.empty());
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */

