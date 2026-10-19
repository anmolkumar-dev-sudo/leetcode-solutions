
class Solution {
public:
    string decodeString(string s) {
        stack<string> st;
        string str = "";
        int cnt = 0;

        for (int i = 0; i < s.length(); i++) {
            if (isdigit(s[i])) {
                cnt = cnt * 10 + (s[i] - '0');
            }
            else if (s[i] == '[') {
                st.push(to_string(cnt));
                st.push(str);
                str = "";
                cnt = 0;
            }
            else if (s[i] == ']') {
                string temp = str;
                str = st.top();
                st.pop();

                int x = stoi(st.top());
                st.pop();

                string tempstr = "";
                while (x--) {
                    tempstr += temp;
                }

                str += tempstr;
            }
            else {
                str += s[i];
            }
        }

        return str;
    }
};
