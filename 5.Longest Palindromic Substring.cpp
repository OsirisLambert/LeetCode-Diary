#include<string>
#include<vector>
using namespace std;

class Solution {
public:
    string longestPalindrome(string s) {
        if (s.length() == 1) {
            return s;
        }
        int count = 0;
        string c;
        for (int i = 0; i < s.length(); i++) {
            for (int j = i + 1; j < s.length(); j++) {
                if (s[i] == s[j]) {
                    count = j - i + 1;
                    if (count > c.size()) {
                        c = getSubString(s, i, j);
                    }
                    break;
                }
            }
        }
        if (c.size() <= 1) {
            c = s[0];
        }

        return c;
    }

    string getSubString(string s, int pos1, int pos2) {
        string a = "";
        for (int i = pos1; i <= pos2; i++) {
            a += s[i];
        }
        return a;
    }
};