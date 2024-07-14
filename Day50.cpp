class Solution {
public:
    string longestPalindrome(string s) {
        if(s.size()<=1)return s;
        string lps = "";
        for(int i=1; i<s.size(); i++){
            //odd
            int olow = i;
            int ohigh = i;
            while(s[olow] == s[ohigh]){
                olow--;
                ohigh++;
                if(olow<0 || ohigh>=s.size()) break;
            }
            string ocurrstr = s.substr(olow+1, ohigh-olow-1);
            if(lps.size() < ocurrstr.size()) lps = ocurrstr;

            //even
            int elow = i-1;
            int ehigh = i;
            while(s[elow] == s[ehigh]){
                elow--;
                ehigh++;
                if(elow<0 || ehigh>=s.size()) break;
            }
            string ecurrstr = s.substr(elow+1, ehigh-elow-1);
            if(lps.size() < ecurrstr.size()) lps = ecurrstr;

        }
        return lps;
    }
};
