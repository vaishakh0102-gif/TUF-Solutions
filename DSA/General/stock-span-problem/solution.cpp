class Solution

{
      vector<int> findPGEE(const vector<int>& arr) {
        int n = arr.size();
        vector<int> pgee(n);
        stack<int> st;
        for (int i = 0; i < n; i++) {
            while (!st.empty() && arr[st.top()] <= arr[i]){
                st.pop();

            } 
            pgee[i] = st.empty() ? i+1 : i-st.top();
            st.push(i);
            
        }
        return pgee;
    }
    public:
    vector <int> stockSpan(vector<int> arr, int n) {
        return findPGEE(arr);
       
       
    }
};
