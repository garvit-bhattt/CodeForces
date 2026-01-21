#include <iostream>
using namespace std;
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int l=0;
    int r=n-1;
    while(l<r){
        if (s[l]!=s[r]){
            if (abs(s[l]-s[r])!=2){
                cout<<"NO"<<"\n";
                return;
            }
        }
    l++;
    r--;
    }
    cout<<"YES"<<"\n";
    return;
}




int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}