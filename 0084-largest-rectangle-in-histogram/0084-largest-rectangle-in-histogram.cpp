class Solution {
private:
    vector<int> nextSmallerElement(vector<int>& heights, int n){
        vector<int> result(n);
        stack<int> st;
        st.push(-1);
        for(int i=n-1; i>=0;i--){
            int curr = heights[i];
            while(st.top() != -1 && heights[st.top()] >= curr){
                st.pop();
            }
            result[i] = st.top();
            st.push(i);
        }
        return result;
    }
    
    vector<int> prevSmallerElement(vector<int>& heights, int n){
        vector<int> result(n);
        stack<int> st;
        st.push(-1);
        for(int i=0; i<n;i++){
            int curr = heights[i];
            while(st.top() != -1 && heights[st.top()] >= curr){
                st.pop();
            }
            result[i] = st.top();
            st.push(i);
        }
        return result;
    }
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        
        vector<int> next(n);
        next = nextSmallerElement(heights, n);
        
        vector<int> prev(n);
        prev = prevSmallerElement(heights, n);
        
        int maxArea = INT_MIN;
        for(int i=0;i<n;i++){
            
            int l = heights[i];
            
            if(next[i] == -1){
                next[i] = n;
            }
            int b = next[i] - prev[i] - 1;
            int area = l*b;
            maxArea = max(area, maxArea);
        }
        return maxArea;
    }
};