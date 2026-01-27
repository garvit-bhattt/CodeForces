#include <iostream>
using namespace std;
void solve(){
    long long x;
    long long y;
    cin>>x;
    cin>>y;
    long long diff=x-y;
    if (diff==1){
        cout<<"NO"<<"\n";
    }
    else{
        cout<<"YES"<<"\n";
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}