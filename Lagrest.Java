class Solution {
    public int largestRectangleArea(int[] heights) {
        int mArea = 0, size = heights.length, ht = 0, wd = 0;
        Stack<Integer> stk = new Stack<>();
        for (int ind = 0; ind <= size; ind++) {
            int curHt = (ind == size) ? 0 : heights[ind];
            while (!stk.isEmpty() && curHt <= heights[stk.peek()]) {
                ht = heights[stk.pop()];
                wd = (stk.isEmpty()) ? ind : ind - stk.peek() - 1;
                mArea = Math.max(mArea, ht * wd);
            }
            stk.push(ind); 
        }
        return mArea;
    }
}
