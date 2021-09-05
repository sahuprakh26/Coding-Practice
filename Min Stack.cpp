/*Design a stack that supports push, pop, top, and retrieving the minimum element in constant time.

Implement the MinStack class:

MinStack() initializes the stack object.
void push(val) pushes the element val onto the stack.
void pop() removes the element on the top of the stack.
int top() gets the top element of the stack.
int getMin() retrieves the minimum element in the stack.
 

Example 1:

Input
["MinStack","push","push","push","getMin","pop","top","getMin"]
[[],[-2],[0],[-3],[],[],[],[]]*/

class MinStack {
public:
    /** initialize your data structure here. */
    int stack[10000];
    int min[10000];
    int topp;
    int minp;
    MinStack() {
        topp=-1;
        minp=-1;

    }
    
    void push(int val) {
        if(topp>=100000)
            return;
        topp=topp+1;
        stack[topp]=val;
        
        if(minp >= 0)
        {
            if(min[minp] > val)
                min[++minp] = val;
            else
            {
                min[minp+1] = min[minp];
                minp+= 1;
            }
        }
        else
            min[++minp] = val;
                
    }
    
    void pop() {
        if(topp<0)
            return;
        topp-=1;
        minp-=1;
        
    }
    
    int top() {
        return stack[topp];
    }
    
    int getMin() {
        return min[minp];
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
