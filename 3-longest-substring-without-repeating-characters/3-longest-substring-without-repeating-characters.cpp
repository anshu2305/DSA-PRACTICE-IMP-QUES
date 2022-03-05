class Solution {
public:
    
    int lengthOfLongestSubstring(string s) {
        int left=0,right=0, count=0, n=s.length(), maxcount=0;
        map <char, int> mp;
        
        for(right; right<n; right++){
            if(mp.count(s[right]) == 0){
                mp.insert({s[right] , right});
            }
            else{
                int ind = mp[s[right]];
                
                if(ind >= left && ind<=right)
                    left = ind+1;
                
                mp[s[right]] = right;
            }
            count= right -left+1;
            maxcount = max(count, maxcount);
        }
        
        return maxcount;
    }
};