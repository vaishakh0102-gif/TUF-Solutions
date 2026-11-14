class Solution {
public:
    vector<int> nextLargerElement(vector<int> nums) {
        int n=nums.size();
       
       stack<int>st;
       vector<int>ans(n,-1);
       for(int i=n-1;i>=0;i--){
            while(!st.empty() && nums[i]>=st.top())st.pop();
            ans[i] = st.empty() ? -1 : st.top();
            st.push(nums[i]);
    
       }
       return ans;


    }
};
