#include <iostream>
#include <string> 

using namespace std;

int main() {
    string s, t;
    cin >> s >> t;
    if (s.size() != t.size()) {
        cout << "NO" << "\n";
        return 0;
    } else {
        int str1 = 0;
        int str2 = s.size() - 1;
        bool is_reverse = true; 

        while (str1 < s.size()) { 
            if (s[str1] != t[str2]) {
                is_reverse = false; 
                break; 
            }
            str1++;
            str2--;
        }

        if (is_reverse) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }
    return 0;
}
