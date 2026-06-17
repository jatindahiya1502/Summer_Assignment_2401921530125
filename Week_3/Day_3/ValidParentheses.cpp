class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(auto i : s){
            if (i=='(' || i=='{' || i =='['){
                st.emplace(i);
            }
            else if(st.empty() || (i==')' && st.top() != '(')) return false;
            else if(st.empty() || (i=='}' && st.top() != '{')) return false;
            else if(st.empty() || (i==']' && st.top() != '[')) return false;
            else st.pop();
        }
        return st.empty();
    }
};
