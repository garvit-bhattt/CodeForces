#include <iostream>
#include <vector>
using namespace std;
void solve(){
    vector<int> arr;
    for (int i=0;i<4;i++){
        int curr;
        cin>>curr;
        arr.push_back(curr);
    }
    int count=0;
    for(int i=1;i<4;i++){
        if (arr[i]> arr[0]){
            count++;
        }
    }
    cout<<count<<"\n";
}


int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}