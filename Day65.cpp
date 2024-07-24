class Solution {
public:
    string reverseWords(string s) {
        string ans = "";
        stack<char>st;
        for(int i=s.size()-1; i>=0; i--){
            if(s[i] != ' '){
                st.push(s[i]);
            }
            else{
                string word = "";
                while(!st.empty()){
                    word+=st.top();
                    st.pop();
                }
                if(ans.size() == 0) ans = word;
                else if(ans.size() != 0 && word.size()!=0) ans = ans + " " + word;
            }
        }
        if(!st.empty()){
            string word = "";
            while(!st.empty()){
                word+=st.top();
                st.pop();
            }
            if(ans.size() == 0) ans = word;
            else ans = ans + " " + word;
        }
        return ans;
    }
};
