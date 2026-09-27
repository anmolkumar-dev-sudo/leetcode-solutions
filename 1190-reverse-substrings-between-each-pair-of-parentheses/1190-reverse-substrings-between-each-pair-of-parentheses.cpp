class Solution {
public:
    string reverseParentheses(string s) {
        stack<int> st;
        string p;

        for (char c : s) {
            if (c == '(') {
                st.push(p.size());
            }
            else if (c == ')') {
                int l = st.top();
                st.pop();
                reverse(p.begin() + l, p.end());
            }
            else {
                p += c;
            }
        }

        return p;
    }
};