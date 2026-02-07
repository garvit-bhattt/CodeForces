#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n,h;
    cin>>n>>h;
    int width=0;
    vector <int> friends;
    for(int i=0;i<n;i++){
        int curr;
        cin>>curr;
        friends.push_back(curr);
    }
    for(int i=0;i<n;i++){
        if(friends[i]>h){
            width+=2;
        }
        else{
            width+=1;
        }
    }
    cout<<width<<"\n";

    return 0;
}