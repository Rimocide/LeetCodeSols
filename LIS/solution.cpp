#include <iostream>
#include <vector>
using namespace std;

class solution {
public:
    int LIS(vector<int>& a) { // using vectors incase I decide to write a more general approach later
        int m = a.size(), count, max, subs=0;
        for (int i = 0; i < m; i++) {
        count=1;
        max=a[i];
            for (int p = i; p < m; p++) {
                if (max < a[p]) {
                    count++;
                    max=a[p];
                }
            }
            if(count>subs)
            subs=count;
        }
        return subs;
    }
};

int main() {
    solution obj;
    vector<int> str1 = {3, 10, 2, 1, 20};
    int m = str1.size();
    int result = obj.LIS(str1);
    cout << "LIS count: " << result << endl;

    return 0;
}
