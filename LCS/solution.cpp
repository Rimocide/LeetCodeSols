#include <iostream>
#include <cstring> // Include the <cstring> header for strlen() function
using namespace std;

class solution {
public:
    int LCS(char* a, char* b) {
        int m = strlen(a), n = strlen(b), count = 0;
        for (int i = 0; i < m; i++) {
            for (int p = 0; p < n; p++) {
                if (a[i] == b[p]) {
                    count++;
                    b[p] = ' ';
                    break; // since LCS is basically the number of common elements in both arrays
                }
            }
        }
        return count;
    }
};

int main() {
    solution obj;

    char str1[] = "AGGTAB";
    char str2[] = "GXTXAYB";
    int result = obj.LCS(str1, str2);
    cout << "LCS count: " << result << endl;

    return 0;
}
