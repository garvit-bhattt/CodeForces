#include <iostream>
#include<set>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;

    set<char> st;

    for (char c : s) {
        st.insert(tolower(c));
    }

    if (st.size() == 26)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
