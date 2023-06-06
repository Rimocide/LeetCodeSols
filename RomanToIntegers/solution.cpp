#include <iostream>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        int ans = 0;
        unordered_map<char, int> romap{
            {'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
        for(int i=0; i<s.size(); i++){
            if(romap[s[i]]<romap[s[i+1]]){
                ans-=romap[s[i]];
            }
            else
            ans+=romap[s[i]];
        }
        return ans;
        }
    };


int main() {
    Solution solution;
    
    string romanNumeral = "MDCLXXVI";  // Example: 1994
    
    int integerEquivalent = solution.romanToInt(romanNumeral);
    
    cout << "Roman Numeral: " << romanNumeral << endl;
    cout << "Integer Equivalent: " << integerEquivalent << endl;
    
    return 0;
}
