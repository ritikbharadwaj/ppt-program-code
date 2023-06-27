#include <iostream>
using namespace std;

int firstUniqChar(string s) {
    int count[26] = {0};
    for (char c : s)
        count[c - 'a']++;
    for (int i = 0; i < s.size(); i++)
        if (count[s[i] - 'a'] == 1)
            return i;
    return -1;
}

int main() {
    // string s = "leetcode";
    string s = "loveleetcode";
    // string s = "aabb";
    cout << firstUniqChar(s) << endl;
    return 0;
}