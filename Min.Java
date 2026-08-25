import java.util.Stack;

class MinStack { 
    private Stack<Integer> mainStack; 
    private Stack<Integer> minStack; 

    public MinStack() { 
        mainStack = new Stack<>();
        minStack = new Stack<>(); 
    } 
    
    public void push(int value) { 
        mainStack.push(value);
        if (minStack.isEmpty() || value <= minStack.peek()) {
            minStack.push(value);
        }
    } 
    
    public void pop() { 
        if (mainStack.isEmpty()) return;
        int popped = mainStack.pop(); 
        if (popped == minStack.peek()) {
            minStack.pop(); 
        }
    } 
    
    public int top() {
        return mainStack.peek();
    } 
    
    public int getMin() {
        return minStack.peek();
    } 
}

155
