//Time complexity = O(n) and Space complexity= O(N) required for keeping an extra array.

int minSteps(int n) 
	{ 
	    int dp[n+1];
	    dp[1]=0; // as the element is itself 1
  
	    for(int i=2; i<=n;i++){
          //conditions are applied because index cannot be a decimal number
	        if((i%2==0) && (i%3==0)){
	            dp[i] = 1+ min(min(dp[i/2] , dp[i/3]), dp[i-1]);
	        }
	        else if( (i%2==0) && (i%3!=0)){
	            dp[i]= 1+ min(dp[i/2], dp[i-1]);
	        }
	        else if( (i%2!=0) && (i%3==0)){
	            dp[i] = 1+ min(dp[i/3], dp[i-1]);
	        }
	        else{
	            dp[i] = 1 + dp[i-1];
	        }
	    }
	    return dp[n];
	}
