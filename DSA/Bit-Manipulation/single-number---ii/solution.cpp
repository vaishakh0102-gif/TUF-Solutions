class Solution {
public:
    int singleNumber(vector<int>& nums) {   
        int n=nums.size();
        int ans=0;
    
        // for(int i=0;i<32;i++){
        //     int  cnt=0;
        //     for(int j=0;j<n;j++){
        //         if(nums[j]&(1<<i)){
        //             cnt++;

        //         }
                
        //     }
        //     if(cnt%3==1) ans=ans | (1<<i);
        // }     
        // return ans;
        

        //sorting aprch
        sort(nums.begin(),nums.end());
       
        int i=1;
        while(i<n){
            if(nums[i]==nums[i-1]){
                i=i+3;
            }
            else return nums[i-1];
        }
        return nums[i-1];



    }
};