class Solution {
public:
    string largestOddNumber(string num) {
        int n=num.length();
        for(int i=0;i<n;i++){
            int last=num.length()-1;
            int number = (num[last] - '0');
            if(number % 2 !=0)
                return num;
            else
                num.pop_back();
        }
        return num;
    }
};