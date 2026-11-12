class Solution {
public:
    vector<int> nextLargerElement(vector<int> arr) {
        int n=arr.size();
       
       stack<int>st;
       vector<int>ans(n,-1);
       for(int i=n-1;i>=0;i--){
            while(!st.empty() && arr[i]>=st.top())st.pop();
            if(!st.empty() &&st.top()>arr[i]){
                ans[i]=st.top();
            }
            st.push(arr[i]);
    
       }
       return ans;


    }
};
