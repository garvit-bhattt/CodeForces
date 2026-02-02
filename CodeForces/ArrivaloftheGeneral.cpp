#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> heights(n);
    for (int i = 0; i < n; i++) {
        cin >> heights[i];
    }

    int firstMaxIdx = max_element(heights.begin(), heights.end()) - heights.begin();
    int lastMinIdx = heights.size() - 1 
                   - (min_element(heights.rbegin(), heights.rend()) - heights.rbegin());

    int moves = firstMaxIdx + (n - 1 - lastMinIdx);

    if (firstMaxIdx > lastMinIdx) {
        moves--;
    }

    cout << moves << "\n";
    return 0;
}
