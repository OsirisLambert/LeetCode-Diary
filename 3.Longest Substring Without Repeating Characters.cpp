#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int count = 0;
        vector<char> c = {};
        for (int i = 0; i < s.length(); i++) {
            bool repeat = false;
            for (int j = 0; j < c.size(); j++) {
                if(s[i] == c[j]){
                    repeat = true;
                    if(count < c.size())
                        count = c.size();
                    c.clear();
                    c.push_back(s[i]);

                }
            }
            if (!repeat) {
                c.push_back(s[i]);
            }
        }
        return count;
    }
};
/*
int main() {
    string s = "";
    Solution x;
    int out = x.lengthOfLongestSubstring(s);
    cout << out;

    system("pause");
}
*/