class Solution {
public:
    struct meeting {
        int start;
        int end;
        int pos;
    };

    static bool comp(struct meeting a, struct meeting b) {
        if (a.end < b.end) return true;
        else if (a.end > b.end) return false;
        else if (a.pos < b.pos) return true;
        return false;
    }

    int maxMeetings(vector<int>& start, vector<int>& end) {
        int n = start.size();
        struct meeting arr[n];
        
        for (int i = 0; i < n; i++) {
            arr[i].start = start[i];
            arr[i].end = end[i];
            arr[i].pos = i + 1;
        }
        
        sort(arr, arr + n, comp);
        
        int cnt = 1;
        int freeTime = arr[0].end;
        
        for (int i = 1; i < n; i++) {
            if (arr[i].start > freeTime) {
                cnt++;
                freeTime = arr[i].end;
            }
        }
        
        return cnt;
    }
};