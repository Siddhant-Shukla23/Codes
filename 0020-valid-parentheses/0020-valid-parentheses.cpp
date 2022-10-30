class Solution {
public:
    bool isMatching(char ch, char top){
        if((ch == ')' && top == '(') || ((ch == '}' && top == '{')) || (ch == ']' && top == '[')){
            return true;
        }
        else return false;
    }
    bool isValid(string s) {
        stack<char> st;
        bool isValid = false;
        for(int i=0;i<s.length();i++){
            char ch = s[i];
            if(ch == '(' || ch == '{' || ch == '['){
                st.push(ch);
            }
            else{
                if(!st.empty()){
                    char top = st.top();
                    if(!st.empty() && isMatching(ch, top)){
                        st.pop();
                    }
                    else{
                        return false;
                    }
                }
                else
                    return false;
            }
        }
        if(st.empty())
            return true;
        else
        return false;
    }
};