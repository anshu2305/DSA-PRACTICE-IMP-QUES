class Solution {
public:
    
    int lengthOfLongestSubstring(string s) {
        
        int left=0,right=0, count=0, n=s.length(), maxcount=0;
        map <char, int> mp;
        
        for(right; right<n; right++){
            //if the elem doesnt exist put the elem with its index in map
            if(mp.count(s[right]) == 0){
                mp.insert({s[right] , right});
            }
            else{
                //if the elem exists and if the elem lies in current range [left,right] 
                //then jump the left var by (ind) places  
                int ind = mp[s[right]];
                
                if(ind >= left && ind<=right)
                    left = ind+1;
                //in both the cases  change the active index of elem in map
                mp[s[right]] = right;
            }
            count= right -left+1;
            maxcount = max(count, maxcount);
        }
        
        return maxcount;
        //final time complexity is o(n)
    }
};