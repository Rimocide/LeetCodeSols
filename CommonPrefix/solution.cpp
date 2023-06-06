#include <iostream>
#include <vector>
#include<algorithm>
#include <string>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
      sort(strs.begin(),strs.end());
      string n=strs[0], p=strs[2];
        for (int i = 0; i < n.size(); i++) {
                if (n[i] != p[i])
                    return "";  // Modified to return an empty string instead of " "
                    cout << strs[0][i]; 
        }
    }
};

int main() {
    Solution solution;

    // Test case 1
    vector<string> strs1 = {"flower", "flow", "flight"};
    cout << "Test Case 1: " << solution.longestCommonPrefix(strs1) << endl;

    // Test case 2
    vector<string> strs2 = {"dog", "racecar", "car"};
    cout << "Test Case 2: " << solution.longestCommonPrefix(strs2) << endl;

    // Test case 3
    vector<string> strs3 = {"apple", "application", "applet"};
    cout << "Test Case 3: " << solution.longestCommonPrefix(strs3) << endl;

    return 0;
}
