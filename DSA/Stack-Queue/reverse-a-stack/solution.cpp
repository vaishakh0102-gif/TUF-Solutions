class Solution {
    void insertAtBottom(stack<int>& st, int ele) {
        if (st.empty()) {
            st.push(ele);
            return;
        }
        int topEle = st.top();
        st.pop();
        insertAtBottom(st, ele);
        st.push(topEle);
    }

public:
    void reverseStack(stack<int>& st) {
        if (st.empty()) return;

        int topEle = st.top();
        st.pop();

        reverseStack(st);
        insertAtBottom(st, topEle);
    }
};