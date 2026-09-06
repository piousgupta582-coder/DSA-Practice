class Solution {
public:
    bool isPalindromic(string s) {
        int n = s.length();
        vector<char> vt;

        for (int i = 0; i < n; i++) {

            vector<char> temp;
            int val = s[i];

            while (val >= 1) {
                if (val % 2 == 0)
                    temp.push_back('0');
                else
                    temp.push_back('1');

                val = val / 2;
            }

            // Current character ke bits ko reverse karo
            reverse(temp.begin(), temp.end());

            // 8 bits complete karo
            while (temp.size() < 8) {
                temp.insert(temp.begin(), '0');
            }

            // Current character ke 8 bits ko vt mein add karo
            for (char c : temp) {
                vt.push_back(c);
            }
        }

        // Palindrome check
        vector<char> st(vt);
        reverse(st.begin(), st.end());

        for (int i = 0; i < vt.size(); i++) {
            if (vt[i] != st[i])
                return false;
        }

        return true;
    }
};
