class Solution {
public:
    vector<vector<int>> insertNewInterval(vector<vector<int>>& Intervals, vector<int>& newInterval){
        vector<vector<int>>ans;
        int i=0;

        int n=Intervals.size();
        while(i<n && Intervals[i][1]<newInterval[0]){
            ans.push_back(Intervals[i]);
            i++;
        }
        while(i<n && Intervals[i][0]<=newInterval[1]){
              
            newInterval[0]=min(Intervals[i][0],newInterval[0]);
            newInterval[1]=max(Intervals[i][1],newInterval[1]);
            i++;
        }
        ans.push_back(newInterval);
        while(i<n){
            ans.push_back(Intervals[i]);
            i++;
        }
        return ans;
        //your code goes here
    }
};