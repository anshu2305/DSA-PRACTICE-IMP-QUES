//Time Complexity= O(N) , Space Complexity = O(1) linear

int maxSubarraySum(int arr[], int n){
    int max_sum=INT_MIN;
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
        if(sum>max_sum) 
            max_sum=sum;
        if(sum<0) 
            sum=0;
    }
    return max_sum;
}
