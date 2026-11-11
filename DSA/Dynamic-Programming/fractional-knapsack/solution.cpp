



class Solution {
public:

    struct item{
        int val,weight;
    };

    static bool comp(struct item a,struct item b){
        return ((double)a.val*b.weight)>((double)b.val*a.weight);
    
    }
    double fractionalKnapsack(vector<long long>& val, vector<long long>& wt, long long capacity) {
        int n=val.size();
        struct item arr[n];
        
        for (int i = 0; i < n; i++) {
            arr[i].val = val[i];
            arr[i].weight = wt[i];
           
        }

        sort(arr,arr+n,comp);

        double totalval=0.0;
        for(int i=0;i<n;i++){
            if(arr[i].weight<=capacity){
                totalval+=arr[i].val;
                capacity=capacity-arr[i].weight;
            }
            else{
                totalval+=(double)capacity*((double)arr[i].val/(double)arr[i].weight);
                break;
            }

        }
        return totalval;

        // Your code goes here
    }
};