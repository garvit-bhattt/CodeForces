#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> participants(n);
    for (int i = 0; i < n; i++) {
        cin >> participants[i];
    }

    int threshold = participants[k - 1];
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (participants[i] >= threshold && participants[i] > 0) {
            count++;
        }
    }

    cout << count << "\n";
}
