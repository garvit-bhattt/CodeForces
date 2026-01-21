#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<long long> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    long long ans=0;
    ans+=arr[n-1];
    long long mx=arr[n-1]-1;
    for(int i =n-2;i>=0 && mx>0;i--){
        if (arr[i]<=mx){
            ans+=arr[i];
            mx=arr[i]-1;
        }
        else{
            ans+=mx;
            mx=mx-1;
        }
    }
    cout<<ans<<"\n";
    return 0;
}