class Solution {
    bool ispalindrome(string s,int l,int r){
        while(l<r){
            if(s[l]!=s[r])return false;
            l++;
            r--;
        }
        return true;

    }
public:
    string longestPalindrome(string s) {
        int n=s.size();
        if(n==0)return "";
        int start=0;
        int maxlen=1;

        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                int len=j-i+1;
                if(len>maxlen && ispalindrome(s,i,j)){
                    start=i;
                    maxlen=len;
                }
            }


        }
        return s.substr(start,maxlen);

        // Your code goes here
    }
};