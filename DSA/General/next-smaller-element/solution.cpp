class Solution {
public:
    vector<int> nextSmallerElements(const vector<int>& arr) {
        int n=arr.size();
       
       stack<int>st;
       vector<int>ans(n,-1);
       for(int i=n-1;i>=0;i--){
            while(!st.empty() && arr[i]<=st.top())st.pop();
            ans[i] = st.empty() ? -1 : st.top();
            st.push(arr[i]);
    
       }
       return ans;

        // Your code goes here
    }
};
