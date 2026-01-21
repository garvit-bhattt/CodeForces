#include <iostream>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    int dec = 10;
    string ans = "";
    int count = 0;

    while (n != 0)
    {
        int curr = n % dec;

        if (curr != 0)
        {
            ans += std::to_string(curr) + " ";
            count++;
        }

        n = n - n % dec;
        dec *= 10;
    }

    cout << count << endl;
    cout << ans << endl;
}                   

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
