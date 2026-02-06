#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
void solve(){
    vector<char> check={'c','o','d','e','f','r','e','s'};
    char alpha;
    cin>>alpha;
    if (find(check.begin(), check.end(), alpha) != check.end()) {
        cout << "YES"<<"\n";
    }
    else{
        cout<<"NO"<<"\n";
    }

}
int main(){
    int t;
    cin>>t;
    while (t--){
        solve();
    }
    
}