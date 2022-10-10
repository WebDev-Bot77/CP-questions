class Solution {
public:
    string breakPalindrome(string s) {
        int n = s.length();
        
        int t = n/2 -1;
        for(int i=0; i<=t; i++){
            if(s[i]!='a'){
                s[i] = 'a';
                return s;
            }
        }
        
        if(n>=2){
            if(s[n-1]=='a'){
                s[n-1] = 'b';
            }
            else{
                s[n-1] = 'a';
            }
            return s;
        }
        
        return "";
    }
};
