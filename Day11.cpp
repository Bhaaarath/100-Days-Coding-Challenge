//Solution of "Parenthesis Checker" in GFG
class Solution{
    public:
    //Function to check if brackets are balanced or not.
    
    bool matches(char a, char b){
        if( a=='(' &&  b==')') return true;
        else if( a=='{' &&  b=='}') return true;
        else if( a=='[' &&  b==']') return true;
        else return false;
    }
    
    bool ispar(string x)
    {
        stack<char>s;
        for(int i=0; i<x.size(); i++){
            if(x[i] == '(' || x[i] == '{' || x[i] == '['){
                s.push(x[i]);
            }
            
            else{
                if(s.empty()) return false;
                
                else if(matches(s.top(), x[i])){
                    s.pop();
                }
                
                else return false;
            }
        }
        
        if(s.empty()) return true;
        else return false;
    }

};
