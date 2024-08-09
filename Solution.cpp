class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) {
        // code here
        if (n == 1)
            return 0;
        
        sort(arr,arr+n);
        
        int initial_diff = arr[n-1] - arr[0];
    
        int max_num= INT_MIN;
        int min_num= INT_MAX;
        
        for(int i=1; i<n;i++){
            if(arr[i]>=k){
                min_num = min(arr[0]+k, arr[i]-k);
                max_num = max(arr[i-1]+k, arr[n-1]-k);
                initial_diff = min(initial_diff, max_num-min_num);
            }
        }
        return initial_diff;
    }
};
