class Solution {
public:
    double myPow(double x, int n) {
        long long pow = n;
        double ans = 1.0;
        if(n<0)
            pow = -1 * pow;
        while(pow){
            //cout<< "ans is: "<< ans<< " pow is: "<< pow << " x is: "<< x<<endl;
            //if pow is odd we change/multiply the ans and simply the rest
            // and if pow is even we change/break x
            if(pow % 2 == 0){
                x = x*x;
                pow = pow/2;
            }
            else{
                ans = ans* x;
                pow = pow-1; 
            }
        }
        if(n<0)
            ans = double(1.0)/double(ans);
        return ans;
    }
    
};