class Solution {
public:
    vector<int> count_NGE(vector<int> &arr, vector<int> &indices) {
        vector<int>ans;
        for(int i=0;i<indices.size();i++){
            int ind=indices[i];
            int cnt=0;
            for(int j=ind+1;j<arr.size();j++){
                if(arr[j]>arr[ind])cnt++;
            }
            ans.push_back(cnt);
        }
        return ans;
        // Your code goes here
    }
};